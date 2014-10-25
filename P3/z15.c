#include<stdio.h>
#include<math.h>
#define MAX 20

int main(){
    int A[MAX],x,n,i,S=0,k;
    float B[MAX],avg,r;
    printf("Unesite broj clanova niza: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        S+=i;
    }
    avg=S/n;
    r=A[i];
    for(i=0;i<n;i++){
        B[i]=avg-A[i];
        if(B[i]<avg){
                r=B[i];
                k=i;
        }
    }
    printf("Trazeni clan niza je %d", A[k]);
    return 0;
}
