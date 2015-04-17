/*
uraditi sa listom:
lista studenata, prosecna ocena, student sa najvisom ocenom,
ispisati svakog drugog studenta


uraditi sa stablom:
stablo u kome su studenti, kljuc je broj indeksa,
uraditi operacije dodavanja, brisanja, trazenja,brisanje celog stabla
promena ocene datom studentu,
onda naci najvisu ocenu (pomocu globalne promenljive/rekurzijom), 
ispisati sve studente sa najvisom ocenom,
i ispisati sve studente koji su u stablu na zadatom nivou n
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 11
typedef struct cvor{
  	int index;
  	char ime[21];
  	char prezime[21];
  	int ocena;
	struct cvor *desni;
	struct cvor *levi;
} elem;

void dodaj(elem **cvor, elem * novi){	
	if(*cvor == NULL){
		printf("student dodat\n");
		*cvor = novi;
		return;
	}
	if( novi->index < (*cvor)->index)dodaj( &((*cvor)->levi) , novi);
	else if( novi->index > (*cvor)->index)dodaj( &((*cvor)->desni) , novi );
	else return;
	
}

elem *trazi(elem *cvor, int br){ // elem *cvor - cvor od koga pocinje pretraga, int br - vrednost koja se trazi 
    
    if(cvor == NULL){
        return NULL;
    }
    if(cvor->index == br){ // ako taj cvor sadrzi taj broj koji se trazi
        return cvor;
    }else{
        if(br < cvor->index){
            return trazi(cvor->levi, br); // vrati ono sto vrati pretraga koja ide od levog elementa
        }
        else if (br > cvor->index){
            return trazi(cvor->desni, br);
        }
    
    }

}

elem *kreirajCvor(int br,char a[],char b[],int c){
    
    	elem *novi = (elem *)malloc(sizeof(elem));
	novi->index = br;
	strcpy(novi->ime,a);
	strcpy(novi->prezime,b);
	novi->ocena = c;
	novi->levi = NULL;
	novi->desni = NULL;
	return novi;

}

int list(elem *cvor){
	if(cvor->levi == NULL && cvor->desni == NULL) return 1;
	return 0;
}

elem* min(elem *cvor) {
	if(cvor == NULL) {
		return NULL;
	}
	if(cvor->levi == NULL) return cvor;
	return min(cvor->levi);
}

elem* brisi(elem *cvor, int br){

	elem *pom;
	if(cvor == NULL){
		return NULL;
	}
	
	if(br < cvor->index){		
		cvor->levi =  brisi(cvor->levi, br);
		return cvor;
	}
	else if(br > cvor->index){		
		cvor->desni = brisi(cvor->desni, br);
		return cvor;
	}
	else{ // br == cvor->inf, brisi cvor
	
		// ako je cvor list
		if(list(cvor) == 1) {
			free(cvor);
			return NULL;
		} else {// ako nije list, tj nisu oba pokazivaca NULL
		
			if(cvor->levi == NULL) { // ako je levi NULL vrati desni
				pom = cvor->desni;
				free(cvor);
				return pom;
			}
			else if(cvor->desni == NULL) { // ako je desni NULL vrati levi
				pom = cvor->levi;
				free(cvor);
				return pom;
			}
			else{ // ako su oba razlicita od NULL
				pom = min(cvor->desni);
				cvor->index = pom->index;
				cvor->desni = brisi(cvor->desni, pom->index);
				return cvor;
				
			}
		
		}
		
	}
	
}

void brisanje_stabla(elem *cvor) {
    if (cvor) // ili if(cvor != NULL)
    {
        brisanje_stabla(cvor->levi);
        brisanje_stabla(cvor->desni);
        free(cvor);
    }
}

void promeni(elem **zaIzmenu, int n){
	(*zaIzmenu)->ocena=n;
}

void ispisi(elem *cvor){
	
	if(cvor != NULL){
		printf("\n");
		printf("Cvor:%d", cvor->index);
		printf(" %s", cvor->ime);
		printf(" %s", cvor->prezime);
		printf(" %d", cvor->ocena);
		if(cvor->levi != NULL) printf(" Levi:%d", cvor->levi->index);
		else printf(" Levi: NULL");
		if(cvor->desni != NULL) printf(" Desni:%d\n", cvor->desni->index);
		else printf(" Desni: NULL");
		
		ispisi(cvor->levi);
		ispisi(cvor->desni);
	}

}

int maks_ocena(elem *cvor){
	/*
	if(cvor==NULL)return 0;
	*/
	int maks = cvor->ocena;
	if(cvor->levi!=NULL){
		if(maks_ocena(cvor->levi)>maks) maks=maks_ocena(cvor->levi);
	}
	if(cvor->desni!=NULL){
		if(maks_ocena(cvor->desni)>maks) maks=maks_ocena(cvor->desni);
	}
	return maks;
}

void stdtimax(elem *cvor,int n){
	if(cvor!=NULL){
		if(cvor->ocena==n){
			printf("Indeks studenta: %d \n",cvor->index);
			printf("Ime studenta: %s \n",cvor->ime);
			printf("Prezime studenta: %s \n",cvor->prezime);
			printf("Ocena studenta: %d \n",cvor->ocena);
			printf("\n");
		}
		stdtimax(cvor->levi,n);
		stdtimax(cvor->desni,n);
	}
}
int main(){
	int n,k,q=1;
	char c;
	char fajl[MAX];
	elem *glava,novi,*t;
	FILE *in;
	glava=NULL;
	do{
		printf("Odaberite opciju:\n");
		printf("1. Dodaj elemente iz fajla\n");
		printf("2. Obrisi element\n");
		printf("3. Pretraga\n");
		printf("4. Brisanje celog stabla\n");
		printf("5. Promena ocene studenta\n");
		printf("6. Pronalazak studenta sa najvisom ocenom\n");
		printf("7. Pronalazak svih studenata sa maksimalnom ocenom\n");
		printf("8. Clear konzole\n");
		printf("9. Ispis kompletnog stabla\n");
		printf(">>");
		scanf("%d",&q);
		switch(q){
				case 0:break;
				case 1:
					printf("Unesite ime fajla za ucitavanje:");
			        	__fpurge(stdin);
			       		scanf("%s", fajl);
			       		in=fopen(fajl,"r");
			       		if(in==NULL){
			       			printf("Nije moguce ucitati datoteku!\n");
			       			return 1;
			       		}
			       		while(fscanf(in,"%d %s %s %d",&novi.index,novi.ime,novi.prezime,&novi.ocena)!=EOF){
			       			dodaj(&glava,kreirajCvor(novi.index,novi.ime,novi.prezime,novi.ocena));
			       			printf("%d %s %s\n",novi.index,novi.ime,novi.prezime,novi.ocena);
			       		}
			        	break;
			        case 2:
			        	printf("Unesite indeks elementa koji zelite da obrisete:");
			        	__fpurge(stdin);
			       		scanf("%d", &n);
			        	brisi(glava, n);
			        	printf("Obrisano!\n");
			        	break;
			        case 3:
			        	printf("Unesite broj indeksa studenta kojeg zelite naci:");
			        	__fpurge(stdin);
			       		scanf("%d", &n);
			       		t=trazi(glava,n);
			        	if(t==NULL)printf("U stablu ne postoji element sa tim brojem indeksa.\n");
			        	else printf("U stablu postoji student sa tim brojem indeksa.\n");
			        	break;
			        case 4:
			        	brisanje_stabla(glava);
			        	printf("Stablo obrisano!\n");
			        	break;
			        case 5:
			        	printf("Unesite broj indeksa studenta ciju ocenu zelite promeniti:");
			        	__fpurge(stdin);
			       		scanf("%d", &n);
			       		printf("Unesite novu ocenu:");
			        	__fpurge(stdin);
			       		scanf("%d", &k);
			       		elem *rez = trazi(glava,n);
			        	promeni(&rez,k);
			        	break;
			        case 6:
			        	printf("Student sa najvecom ocenom ima: %d\n",maks_ocena(glava));
			        	break;
			        case 7:
			        	stdtimax(glava,maks_ocena(glava));
			        	break;
			        case 8:
			        	system("clear");
			        	break;
			        case 9:
			      		ispisi(glava);
			      		break;
			        default:printf("Neispravna opcija!");
			        }
	}while(q!=0);
	
}