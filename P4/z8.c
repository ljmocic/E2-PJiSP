#include <stdio.h>

int suma(int n)
{
    if (n>0)return (n+suma(n - 1));
    else return 0;
}

int main(){
    int n;
    printf("Unesite n: ");
    scanf("%d",&n);
    printf("Rezultat je: %d", suma(n));
    return 0;
}
