/*
Realizovati bazu filmova(imdb) preko binarnog stabla i omoguciti 
operacije kao sto su dodavanje, brisanje filmova
ispis,brisanje stabla
pretraga filmova po nazivu,sifri
ispis najstarijeg filma u bazi
izmenu postojecih podataka u stablu
pronalazak najkraceg naziva
pronalazak filma sa najvecom ocenom
svaki film ima sifru, ime, godinu izdavanja i ocenu
ucitati preko fajla i realizovati meni
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30

typedef struct cvor{
	int sifra;
	char ime[MAX];
	char zanr[MAX];
	int godina;
	int ocena;
	struct cvor *levi;
	struct cvor *desni;
}elem;

elem *kreirajElem(int a,char b[],char c[],int d,int e){
	elem *k=(elem *)malloc(sizeof(elem));
	k->sifra=a;
	strcpy(k->ime,b);
	strcpy(k->zanr,c);
	k->godina=d;
	k->ocena=e;
	k->levi=NULL;
	k->desni=NULL;
	return k;
}

void dodaj(elem **glava,elem *novi){
	if(*glava==NULL){
		*glava=novi;
		return;
	}
	if(novi->sifra<(*glava)->sifra)dodaj(&((*glava)->levi),novi);
	else if(novi->sifra>(*glava)->sifra)dodaj(&((*glava)->desni),novi);
	else return;
}

void ispisStabla(elem *glava){
	if(glava){
		printf("\n");
		printf("Sifra: %d\n",glava->sifra);
		printf("Ime filma: %s\n",glava->ime);
		printf("Zanr: %s\n",glava->zanr);
		printf("Godina: %d\n",glava->godina);
		printf("ocena: %d\n",glava->ocena);
		if(glava->levi!=NULL)ispisStabla(glava->levi);
		if(glava->desni!=NULL)ispisStabla(glava->desni);
	}
}

void izbrisiStablo(elem **glava){
	if(*glava){
		izbrisiStablo(&((*glava)->levi));
		izbrisiStablo(&((*glava)->desni));
		free(*glava);
		*glava=NULL;
	}
}

elem *pretraga(elem *glava,int i){
	if(glava==NULL)return NULL;
	if(glava->sifra==i)return glava;
	if(i<glava->sifra)return pretraga(glava->levi,i);
	else if(i>glava->sifra)return pretraga(glava->desni,i);
}

void izbrisi(elem **glava,elem *i){
	printf("Obrisano!");
}

int min_godina(elem *cvor){
        int min = cvor->godina;
        if(cvor->levi!=NULL)if(min_godina(cvor->levi)<min) min=min_godina(cvor->levi);
        if(cvor->desni!=NULL)if(min_godina(cvor->desni)<min) min=min_godina(cvor->desni);
        return min;
}

int min_duz(elem *cvor){
        int min =strlen(cvor->ime);
        if(cvor->levi!=NULL)if(min_duz(cvor->levi)<min)min=min_duz(cvor->levi);
        if(cvor->desni!=NULL)if(min_duz(cvor->desni)<min) min=min_duz(cvor->desni);
        return min;
}

int maxOcena(elem *cvor){
        int max =cvor->ocena;
        if(cvor->levi!=NULL)if(maxOcena(cvor->levi)>max)max=maxOcena(cvor->levi);
        if(cvor->desni!=NULL)if(maxOcena(cvor->desni)>max)max=maxOcena(cvor->desni);
        return max;
}

void ispravi(elem **glava, int i){
	(*glava)->ocena=i;
}

int main(){
	int q,l,l1,l2,l3;
	char s1[21],s2[21];
	elem x,*p,*glava=NULL;
	FILE *in,*out;
	in=fopen("in.txt","r");
	out=fopen("out.txt","w");
	if(in==NULL){
		printf("Nije moguce ucitati datoteku!\n");
		return 1;
	}
	if(out==NULL){
		printf("Nije moguce ucitati datoteku!\n");
		return 1;
	}
	do{
		printf("------------------------------------------\n");
		printf("1. Ucitaj fajlove iz datoteke.\n");
		printf("2. Ispis stabla\n");
		printf("3. Izbrisi stablo\n");
		printf("4. Dodaj novi element u stablo\n");
		printf("5. Izbrisi element iz stabla\n");
		printf("6. Pretraga\n");
		printf("7. Ispis najstarijeg filma u datoteku\n");
		printf("8. Ispravi podatke o filmu\n");
		printf("9. Pronalazak najkraceg naziva filma\n");
		printf("10. Pronalazak filma sa najvecom ocenom\n");
		printf("11. Ocisti konzolu\n");
		printf("0. Izlazak iz programa\n");
		printf("------------------------------------------\n");
		printf(">>");
		scanf("%d",&q);
		switch(q){
			case 0:break;
			case 1:
				while(fscanf(in,"%d %s %s %d %d",&x.sifra,x.ime,x.zanr,&x.godina,&x.ocena)!=EOF){
					//printf("%d %s %s %d %d\n",x.sifra,x.ime,x.zanr,x.godina,x.ocena);
					printf("Filmovi dodan!\n");
					dodaj(&glava,kreirajElem(x.sifra,x.ime,x.zanr,x.godina,x.ocena));
				}
				break;
			case 2:
				if(glava)ispisStabla(glava);
				else printf("Stablo je prazno!\n");
				break;
			case 3: 
				izbrisiStablo(&glava);
				break;
			case 4: 
				printf("Unesite sifru(mora biti identicna):");
				scanf("%d",&l1);
				printf("Unesite ime filma:");
				__fpurge(stdin);
				gets(s1);
				printf("Unesite zanr:");
				__fpurge(stdin);
				gets(s2);
				printf("Unesite godinu:");
				__fpurge(stdin);
				scanf("%d",&l2);
				printf("Unesite ocenu:");
				scanf("%d",&l3);
				dodaj(&glava,kreirajElem(l1,s1,s2,l2,l3));
				break;
			case 5: 
				printf("Unesite sifru elementa koji zelite obrisati:");
				scanf("%d",&l1);
				izbrisi(&glava,pretraga(glava,l1));
				break;
			case 6:
				printf("Unesite sifru elementa koji zelite pronaci:");
				scanf("%d",&l1);
				if(pretraga(glava,l1)!=NULL)printf("Film pronadjen!\n");
				else printf("Film nije pronadjen!\n");
				break;
			case 7:
				l1=min_godina(glava);
				printf("%d\n",l1);
				//ispisElem(pretraga(glava,l1),out);
				break;
			case 8:
				printf("Unesite sifru filma ciju ocenu zelite ispraviti: ");
				scanf("%d",&l1);
				printf("Unesite novu ocenu: ");
				scanf("%d",&l2);
				p=pretraga(glava,l1);
				if(p!=NULL)ispravi(&p,l2);
				else("Film nije pronadjen, pokusajte ponovo\n");
				break;
			case 9:
				printf("Najkraci naziv u bazi ima %d karaktera.\n",min_duz(glava));
				break;
			case 10:
				printf("Najveca ocena u stablu je %d.\n",maxOcena(glava));
				break;
			case 11:
				system("clear");
				break;
			default: 
				printf("Pogresan parametar!");
				break;
		}
	}while(q!=0);
	fclose(in);
	fclose(out);
	return 0;
}