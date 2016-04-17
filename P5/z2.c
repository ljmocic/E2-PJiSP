/*
Napiši program koji učitava niz od n elemenata niza strukture ličnost, koja sadrži sledeća polja:
ime, adresa, dan rođenja, mesec rođenja i godina rođenja. Prikazati osobe koje su u horoskopu bik.
*/
#include<stdio.h>
#define MAX 31

struct osoba {
	char ime[MAX];
	char adresa[MAX];
	int dan;
	int mesec;
	int godina;
};

int main(){
	int n, i=0, k[MAX];
	struct osoba test[MAX];
	printf("Unesite broj osoba: ");
	scanf("%d",&n);
	for(i;i<n;i++){
		printf("Unesite ime osobe: ");
		scanf("%s", test[i].ime);
		printf("Unesite adresu osobe: ");
		scanf("%s", test[i].adresa);
		printf("Unesite dan, mesec i godinu rodjenja: \n");
		scanf("%d", &test[i].dan);
		scanf("%d", &test[i].mesec);
		scanf("%d", &test[i].godina);
		if((test[i].dan > 21 && test[i].mesec==4) || (test[i].dan < 23 && test[i].mesec==5))k[i]=1;
		else k[i]=0;
	}
	for(i=0;i<n;i++) if(k[i]!=0) printf("%s\n",test[i].ime);
	return 0;
}
