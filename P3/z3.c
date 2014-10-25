#include<stdio.h>

int main(){
    int n,R=1,i=1;
    printf("Unesite broj n: ");
    scanf("%d",&n);
    do{
        R=R*i;
        i++;
    }while(i<=n);
    printf("Faktorijel broja n je: %d", R);
    return 0;
}
