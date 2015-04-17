/*
Napisati funkciju int jednaki(char *s1, char *s2) koja proverava da li su stringovi s1 i s2 jednaki. 
U glavnom programu od korisnika učitati dva stringa (maksimalne dužine 20 karaktera) i ispisati da li su jednaki.
*/
#include<stdio.h>
#include<string.h>
#define MAX 21

int isti(char *s1,char *s2,int d){
	int i,c=0;
	for(i=0;i<d;i++)if(s1[i]!=s2[i])return 0;
	return 1;
}

int main(){
	char s1[MAX],s2[MAX];
	int q;
	printf("Unesite prvi string: ");
	gets(s1);
	printf("Unesite drugi string: ");
	gets(s2);
	if(strlen(s1)!=strlen(s2)){
		printf("Stringovi nisu jednaki\n");
		return 0;
	}	
	if(isti(s1,s2,strlen(s1)))printf("Ocevidno je da su stringovi jednaki\n");
	else printf("Stringovi nisu jednaki\n");
	return 0;
}
