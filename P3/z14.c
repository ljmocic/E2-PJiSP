#include<stdio.h>
#include<ctype.h>
#define MAX 80
int main(){
int n,i,q=0;
char C[MAX],A[MAX];
printf("Unesite broj clanova niza: ");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf(" %c",&C[i]);
if(isalpha(C[i])){A[q]=C[i];
    q++;
};
}
printf("Clanovi niza A su: ");
for(i=0;i<q;i++)printf(", %c", A[i]);
}
