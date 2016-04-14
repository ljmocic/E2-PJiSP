#include<stdio.h>

int main(){
    int i, n=6, min=0, A[]={-5,-12,-89,5,1,25};
    for(i=0;i<n;i++) if(A[i]<min)min=A[i];
    if(min==0) printf("Niz nema negativnih clanova.");
    else printf("Najveci negativni element u nizu je %d", min);
    return 0;
}
