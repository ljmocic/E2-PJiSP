#include<stdio.h>

int main(){
    int A[30][30],a,b,i,j,S=0;
    printf("Unesite broj redova i kolona: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Unesite clanove niza: \n");
    for(i=0;i<a;i++)for(j=0;j<b;j++)scanf("%d", &A[i][j]);
    for(i=0;i<a;i++)for(j=0;j<b;j++)if(i>j)S+=A[i][j];
    printf("Zbor clanova ispod glavne dijagonale je %d", S);
    return 0;
}
