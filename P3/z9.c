#include<stdio.h>
#define MAX 30

int main(){
    int A[MAX], i, b, n, k=0;
    printf("Unesite broj clanova niza: ");
    scanf("%d", &n);
    printf("Unesite clanove niza: \n");
    for(i=0;i<n;i++) scanf("%d", &A[i]);
    printf("Unesite trazeni broj u nizu: \n");
    scanf("%d", &b);
    for(i=0;i<n;i++) if(A[i]==b)k++;
    printf("U nizu A, broj %d se pojavljuje %d puta.", b, k);
    return 0;
}
