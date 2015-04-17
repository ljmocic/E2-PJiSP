/*
Napisati funkciju koja ispisuje string obrnutim redom.
Napraviti kratak test program (učitati string i ispisati obrnutim redosledom karaktere)
sa i bez upotrebe f-ije strlen().
*/
#include<stdio.h>
#include<string.h>
#define MAX 21

int strduz(char *s){
	int k=0;
	while(1){
		k++;
		if(s[k]=='\0')break;
	}
	return k;
}

int ispis(char *s,int k){
	int i;
	k--;
	printf("String je:");
	for(i=k;i>=0;i--)printf("%c",s[i]);
	printf("\n");
}

int main(){
	char s[MAX];
	int k=0,d;
	printf("Unesite string:");
	gets(s);
	ispis(s,strduz(s));// mozemo koristiti i strlen(s) ako hocemo preko ugradjene funkcije, onda ovu nasu gore mozemo obrisati
	return 0;
}
