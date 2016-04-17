#include<stdio.h>
#define MAX 30

int main()
{
    int i,n,j;
    float x[MAX], t;
    printf("Unesite broj elemenata niza za sortiranje:\n");
    scanf("%d", &n);
    printf("Unesite clanove niza: \n");
    for(i=0;i<n;i++) scanf("%f", &x[i]);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(x[i]>x[j]){
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
    printf("Sortirani niz je:\n");
    for(i=0;i<n;i++) printf("x[%d]=%.2f\n", i, x[i]);
    return 0;
}
