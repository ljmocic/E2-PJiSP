/*
Napisati C program koji realizuje navedene operacije sa dinamičkom strukturom podataka oblika jednostruko spregnute liste.
Elementlistesastojiseoddvapolja: 
• podatak(jedankarakter) 
• pokazivačnasledećielementliste 

Operacijekojetrebarealizovatisu: 
• unosnovogkaraktera,akosenenalaziulisti, 
• modifikacija karaktera (umesto jednog karaktera treba upisatidrugikarakter)
• traženjekarakteraulistii 
• brisanjekarakteraizliste.
*/
#include<stdio.h>
#include<stdlib.h>

struct cvor{
	char znak;
	struct cvor *sledeci;
};

typedef struct cvor elem;


void unos(elem **glava,char c){
	elem *tek,*pret;
	elem *novi=(elem *)malloc(sizeof(elem));
	novi->znak=c;
	novi->sledeci=NULL;
	if(*glava==NULL){
		*glava=novi;
		return;	
	}
	pret=*glava;
	tek=*glava;
	while(tek!=NULL){
		pret=tek;
		tek=tek->sledeci;
	}
	pret->sledeci=novi;
}

void prikazi(elem *glava){
	elem *k;
	k=glava;
	if(glava==NULL){
		printf("Lista je prazna.\n");
		return;
	}
	do{
		printf("%c\n",k->znak);
		k=k->sledeci;
	}while(k!=NULL);
}
void pretraga(elem *glava, char c){
	int i;
	elem *k;
	k=glava;
	while(k!=NULL && i!=0){
		if(k->znak==c){
			printf("Trazeni element postoji u listi!\n");
			i=0;
			break;
		}
		k=k->sledeci;
	}
	if(i==1)printf("Trazeni element ne postoji u listi!\n");
}

void modifikacija(elem **glava, char c, char g){
	elem *pret,*tek;
	pret=*glava;
	tek=*glava;
	while(tek!=NULL){
		if(tek->znak==c)tek->znak=g;
		pret=tek;
                tek=tek->sledeci;
	}
}

void brisanje(elem **glava,char c){
	elem *tek,*pret;
	tek=*glava;
	pret=*glava;
	while(tek!=NULL){
		if(tek->znak=c){
			pret->sledeci=tek->sledeci;
			free(tek);
		}
		tek=pret->sledeci;
	}
	*glava=NULL;
}

int main(){
	int i=0;
	char c,a;
	elem *glava;
	glava=NULL;
	for(i;i<5;i++){
		printf("Unesite karakter broj %d : ", i);
		__fpurge(stdin);
		c=getchar();
		unos(&glava,c);
	}
	prikazi(glava);
	printf("Pretraga karaktera: ");
	__fpurge(stdin);
	c=getchar();
	pretraga(glava,c);
	printf("Unesite znak koji zelite zameniti: ");
	__fpurge(stdin);
	c=getchar();
	printf("Unesite znak kojim zelite zameniti: ");
	__fpurge(stdin);
	a=getchar();
	modifikacija(&glava,c,a);
	prikazi(glava);
	printf("Zelite li obrisati listu?(unesite 1 za da, 0 za ne)\n");
	scanf("%d",&i);
	if(i==1)brisanje(&glava,c);
	prikazi(glava);
	return 0;
}
