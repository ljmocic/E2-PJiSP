#include<stdio.h>

int prost(int n){
    int i=2;
    for(i;i<n;i++)if(n%i==0)return 0;
    return 1;
}

int main(){
    int n,i;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("Ovo su prosti brojevi do %d : \n", n);
    for(i=3;i<=n;i++)if(prost(i)==1)printf("%d\n",i);
    return 0;
}
