#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j, k;
    float S=1.0, P=0.0;

    do{
        printf("Unesi pozitivan ceo broj: ");
        scanf("%d",&n);
    }while(n<1);

    do{
        printf("Unesi realan broj k (k mora biti manje od n): ");
        scanf("%d",&k);
    }while(k>n);

    for (i=0;i<=n;i++) S=S*(k+i*n);

    printf("Suma je %.3f ",S);
    return 0;
}
