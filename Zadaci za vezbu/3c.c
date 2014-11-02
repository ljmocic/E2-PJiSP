#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,k;
    float S=0.0,P=0.0;
    do{
    printf("Unesi pozitivan ceo broj: ");
    scanf("%d",&n);
    }while(n<1);
    do{
        printf("Unesi realan broj k (k mora biti manje od n): ");
        scanf("%d",&k);
    }while(k>n);
    for (i=1;i<=k;i++){
        S+=pow(-1,k+1)/(n+i*k);
    }
    printf("Suma je %.3f ",S);
    return 0;
}
