#include<stdio.h>
#define MAX 30
int main(){
    int t[MAX],n,i,c[MAX],x,S=0;
    printf("Unesite broj kupaca: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Unesite koliko je sekundi cekao %d kupac: \n", i+1);
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++){
        S+=t[i];
        printf("%d kupac ce cekati %d sekundi\n",i+1,S);
    }
    return 0;
}
