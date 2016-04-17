#include<stdio.h>
#define MAX 25

int main(){
    int X[MAX], A[MAX], B[MAX], i, n, z=0, q=0;
    printf("Unesite broj clanova niza: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d",&X[i]);
        if(X[i]%2==0){
            A[z]=X[i];
            z++;
        }
        if(X[i]<0){
            B[q]=X[i];
            q++;
        }
    }
    printf("Clanovi niza X su: ");
    for(i=0;i<n;i++) printf(", %d", X[i]);
    printf("\n");
    printf("Clanovi niza A su: ");
    for(i=0;i<z;i++) printf(", %d", A[i]);
    printf("\n");
    printf("Clanovi niza B su: ");
    for(i=0;i<q;i++) printf(", %d", B[i]);
    return 0;
}
