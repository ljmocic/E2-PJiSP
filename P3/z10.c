#include<stdio.h>
#define MAX 20

int main(){
    float A[MAX], m;
    int n, i;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%f", &A[i]);
        if(i==0) m=A[i];                         //ovo treba jer ako uzmemo da je m=0 kao u prethodnoj verziji,
        else if(A[i]>m) m=A[i];                   //ako je ceo niz negativan max vrednost ce biti 0, sto nije dobro
    }
    printf("Najveci clan niza je %.2f", m);
    return 0;
}
