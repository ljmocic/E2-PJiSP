#include<stdio.h>

int main()
{
    int n, i, j, pom=1, S=0;
    printf("Unesite broj n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){       //u ovoj petlji sabirmo n sabiraka
        for(j=0;j<=i;j++) pom*=(i+j);     //u ovoj petlji trazimo i-ti sabirak
        S+=pom;
        pom=1;
    }
    printf("Suma je:%d", S);
    return 0;
}
