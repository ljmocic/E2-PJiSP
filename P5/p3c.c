/*
Napisati funkciju kojom se ispisuje deo stringa s od pozicije p na dužini k.
*/
#include<stdio.h>
#include<string.h>
#define MAX 21

int ispis(int a, int b, char *s,int k){
	int i;
	printf("String je:");
	for(i=a;i<a+b;i++) printf("%c",s[i]);
	printf("\n");
}

int main(){
	int p, k;
	char s[MAX];
	printf("Unesite string:");
	gets(s);
	printf("Unesite p:");
	scanf("%d",&p);
	printf("Unesite k:");
	scanf("%d",&k);
	ispis(p,k,s,strlen(s));
	return 0;
}
