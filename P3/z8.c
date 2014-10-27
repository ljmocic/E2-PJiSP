#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, s, k;
    do
    {
        printf("Unesi n: ");
        scanf("%i", &n);
    }
        while(n<0);
    s=0;
    for(i=1;i<=n;i++){
        k=1;
        for(j=0;j<=i;j++){
            k*=(i+j);
        }
        s+=k;
    }
    printf("\n%i", s);
    return 0;
}
