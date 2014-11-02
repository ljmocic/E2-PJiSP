#include<stdio.h>
#include<math.h>

int fakt(int n){
    int i,R=1;
    for(i=1;i<=n;i++)R=R*i;
    return R;
}
int main()
{
    int n,i,c=-1;
    float S=0.0;
    printf("Unesi pozitivan ceo broj : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)S+=pow(c,i+1)*fakt(3*i);
    printf("Suma je %.3f ",S);
    return 0;
}
