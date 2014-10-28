#include <stdio.h>

int main ()
{
    int i,n,niz[n];
    printf("Unesi broj clanova niza : ");
    scanf("%d",&n);
    printf("Unesi redom hexadecimalne brojeve: \n");
    for (i=0;i<n;i++){
        scanf ("%x",&niz[i]);
        printf(" = %d \n",niz[i]);
    }
    return 0;
}
