#include<stdio.h>
#include<math.h>

int fakt(int n){
    int i,R=1;
    for(i=1;i<=n;i++)R=R*i;
    return R;
}


int main()
{
    int n,i,j;
    float S=0.0,P=0.0;
    printf("Unesi pozitivan ceo broj : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++)P+=1/(float)(j+1);
        S+=fakt(i)/P;
    }
    printf("Suma je %.3f ",S);
    return 0;
}
