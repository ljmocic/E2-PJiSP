#include<stdio.h>

int main(){
    int n, i, S=0;
    printf("Unesite n: \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++) S=S+i;
    printf("Suma prvih n brojeva je %d.", S);
    return 0;
}
