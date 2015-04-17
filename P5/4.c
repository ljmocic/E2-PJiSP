/*
Napisati funkciju koja kao parametre uzima jedan string i karakter, 
a vraća broj pojavljivanja tog karaktera u string. 
Napisati test program. 
(Primer: str=“tatatatira”, c=‘a’, povratna vrednost je 4).
*/#include<stdio.h>
#include<string.h>
#define MAX 31

int brpoj(char *s,char x,int d){
	int i,c=0;
	for(i=0;i<d;i++)if(s[i]==x)c++;
	return c;
}

int main(){
	char s[MAX],k;
	printf("Unesite string: ");
	gets(s);
	printf("Unesite slovo: ");
	scanf("%c",&k);
	printf("Broj pojavljivanja slova %c u stringu %s je: %d\n",k,s,brpoj(s,k,strlen(s)));
	return 0;
}
