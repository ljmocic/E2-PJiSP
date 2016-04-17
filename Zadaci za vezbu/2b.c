#include<stdio.h>
#include<math.h>

int fakt(int n){
    int i,R=1;
    for(i=1;i<=n;i++)R=R*i;
    return R;
}


int main()
{
    int n, i, j, k;
    float x,S=0.0, P1=0.0, P2=0.0;
    printf("Unesi pozitivan ceo broj : ");
    scanf("%d", &n);
    printf("Unesi realan broj x: ");
    scanf("%f", &x);
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++){
                k=2*i+1;
                P1=pow(-1,i)*pow(x,k);
                P2=fakt(2*i-1);
        }
        S+=P1/(float)P2;
    }
    printf("Suma je %.3f ",S);
    return 0;
}
