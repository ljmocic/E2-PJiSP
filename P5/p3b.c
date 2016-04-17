/*
Napisati funkciju kojom se ispisuje poslednjih k znakova string promenljive s.
*/
#include<stdio.h>
#include<string.h>
#define MAX 21

int ispis(int a, char *s,int k){
	int i;
	int b=k-a;
	printf("String je:");
	for(i=b;i<=k;i++) printf("%c",s[i]);
	printf("\n");
}

int main(){
	char s[MAX];
	int p,k;
	printf("Unesite string:");
	gets(s);
	printf("Unesite k:");
	scanf("%d",&k);
	ispis(k,s,strlen(s));
	return 0;
}
