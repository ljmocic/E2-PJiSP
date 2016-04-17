#include<stdio.h>

void prestupna(int n, int m){
    for(n;n<=m;n++) if((n%4==0) && (n%400==0 || n%100!=0)) printf("%d\n", n);
}

int main(){
    int n, m;
    printf("Unesite n i m: \n");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("Prestupne godine od %d do %d:\n", n,m);
    prestupna(n,m);
    return 0;
}
