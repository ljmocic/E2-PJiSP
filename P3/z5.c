#include<stdio.h>

int main(){
    int n, i=2, k=0;
    printf("Unesite broj n: ");
    scanf("%d", &n);
    for(i;i<n;i++) if(n%i==0)k++;
    if(k>0) printf("Broj nije prost");
    else printf("Broj je prost");
}
