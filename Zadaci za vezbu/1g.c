#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    float k, S=1.0, P=0.0;
    printf("Unesi pozitivan ceo broj : ");
    scanf("%d", &n);
    k=sqrt(2);
    for (i=1;i<=n;i++){
        S=S*1/k;
        k=sqrt(2+k);
    }
    printf("Suma je %f ",S);
    return 0;
}
