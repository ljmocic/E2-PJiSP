/*
Napisati program koji proverava da li je učitani string palindrom.
Program napraviti tako da radi za reči a potom ga proširiti da radi i sa rečenicama 
(ignorišući znakove razmaka) kako bi string “Ana voli Milovana” program registrovao kao palindrom.
*/
#include<stdio.h>
#include<string.h>
#define MAX 31

/* Verzija za unos bez razmaka
int pal(char *s,int d){
	int i=0;
	for(i;i<d/2;i++)if(s[i]!=s[d-i-1])return 0;
	return 1;
}

int main(){
	char s[MAX];
	int x=0;
	printf("Unesite string: ");
	gets(s);
	x=pal(s,strlen(s));
	if(x==1)printf("String je palindrom\n");
	else printf("String nije palindrom\n");
	return 0;	
}
*/

int pal(char *s,int d){
	int i=0;
	printf("%c %c \n",s[i],s[d-i-1]);
	for(i;i<d/2;i++){
		printf("%c %c \n",s[i],s[d-i-1]);	
		if(s[i]!=s[d-i-1])return 0;
	}
	return 1;
}
void pomeri(char *s, int k, int f){
	for(k;k<f;k++)s[k]=s[k+1];
}
int uklraz(char *s, int d){
	int i=0,k=0,c=0;
	for(i;i<d;i++){
		if(s[i]==' '){
			pomeri(s,i,d);
			c++;
		}
	}
	return c;
}

int main(){
	char s[MAX];
	int x=0,q,brraz=0;
	printf("Unesite string: ");
	gets(s);
	q=strlen(s);
	brraz=uklraz(s,q);
	printf("%d \n",brraz);
	x=pal(s,q-brraz);
	if(x==1)printf("String je palindrom\n");
	else printf("String nije palindrom\n");
	return 0;	
}








