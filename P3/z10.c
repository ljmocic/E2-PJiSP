#include<stdio.h>
#define MAX 20

int main(){
    float A[MAX],m=0;
    int n,i;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%f",&A[i]);
        if(A[i]>m)m=A[i];
    }
    printf("Najveci clan niza je %.2f",m);
    return 0;
}
