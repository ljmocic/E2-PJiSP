/*
Napisati funkciju void updown(char *s) koja mala slova u stringu s pretvara u velika, i obrnuto. 
Ostale karaktere u stringu (cifre, znakove interpunkcije, itd) funkcija ne sme modifikovati. U glavnom programu od korisnika učitati string. 
Nakon toga, string obraditi implementiranom funkcijom i ispisati rezultat. 
*/
#include<stdio.h>
#include<string.h>
#define MAX 30
void upsidedown(char *s,int n){
	int i=0;
	for(i;i<n;i++){	
		if(s[i]>64 && s[i]<91)s[i]+=32;
		else if(s[i]>91 && s[i]<123)s[i]-=32;
	}
}

int main(){
	char s[MAX];
	printf("Unesite string: ");
	gets(s);
	upsidedown(s,strlen(s));
	printf("%s\n",s);
	return 0;
}
