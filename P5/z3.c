/*
Napisati program koji učitava niz od n elemenata niza strukture auto, koja sadrži sledeća polja:
Marka automobila (jedna reč, do 20 karaktera) Kubikaža (prirodan broj) Godište (prirodan broj) 
Na osnovu zadate kubikaže pronaći najnoviji auto sa kubikažom ne većom od zadate i  ispisati njegove podatke na standardni izlaz.
*/
#include<stdio.h>
#define MAX 31

struct automobil {
	char model[MAX];
	int kubikaza;
	int godina;
};

int main(){
	int n,c,m,r,k[MAX],i=0;
	struct automobil bmw[MAX];
	printf("Unesite broj modela bmw-a: ");
	scanf("%d",&n);
	printf("Unesite broj zeljene kubikaze: ");
	scanf("%d",&c);
	for(i;i<n;i++){
		printf("Unesite model bmw-a: ");
		scanf("%s",bmw[i].model);
		printf("Unesite kubikazu: ");
		scanf("%d",&bmw[i].kubikaza);
		printf("Unesite godinu proizvodnje: \n");
		scanf("%d",&bmw[i].godina);
	}
	m=bmw[0].godina;
	for(i=0;i<n;i++){
		if(2014-bmw[i].godina < m)m=2014-bmw[i].godina;
		if(2014-bmw[i].godina <= m && bmw[i].kubikaza<c)
		r=i;
	}
	printf("Bmw modela %s proizveden %d sa %d m3 motorom je odlican izbor za vas.\n", bmw[r].model,bmw[r].godina,bmw[r].kubikaza);	
	return 0;
}
