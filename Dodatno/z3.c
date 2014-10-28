#include<stdio.h>

int main(){
    int n,i,c,d,max,min,maxI,minI,A[30];
    printf("Unesite broj clanova niza: ");
    scanf("%d",&n);
    printf("Unesite elemente niza:\n");
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    printf("Unesite interval: \n");
    scanf("%d",&c);
    scanf("%d",&d);
    max=A[c];
    min=A[c];
    for(i=c;i<=d;i++){
        if(A[i]>max){
            max=A[i];
            maxI=i;
        }
        if(A[i]<min){
            min=A[i];
            minI=i;
        }
    }
    printf("Index maksimalnog elemnta u intervalu (%d,%d) je %d\n", c,d,maxI);
    printf("Index minimalnog elemnta u intervalu (%d,%d) je %d\n", c,d,minI);
    return 0;
}
