#include<stdio.h>
#define MAX 30

int main(){
    int A[MAX][MAX],i,j,n,m,b[MAX],S=0;
    printf("Unesite broj vrsta matrice: ");
    scanf("%d",&n);
    printf("Unesite broj kolona matrice: ");
    scanf("%d",&m);
    for(i=0;i<n;i++)b[i]=0;
    printf("Unesite elemente matrice:\n");
    for(i=0;i<n;i++)for(j=0;j<m;j++){
        scanf("%d",&A[i][j]);
        b[i]+=A[i][j];
        }
    for(i=0;i<n;i++)printf("%d je zbir elemenata %d vrste\n", b[i],i+1);
    return 0;
}
