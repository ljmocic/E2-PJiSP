/*
Napisati funkciju kojom se ispisuje: a) prvih k znakova string promenljive s;
*/
#include<stdio.h>
#include<string.h>
#define MAX 21

int ispis(int a, char *s,int k){
	int i;
	printf("String je:");
	for(i=0;i<a;i++)printf("%c",s[i]);
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
