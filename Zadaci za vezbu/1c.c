#include<stdio.h>
#include<math.h>

int fakt(int n){
    int i,R=1;
    for(i=2;i<=n;i++)R*=i;
    return R;
}

int main(){
    int n, i, S=0;
    printf("Unesi pozitivan ceo broj : ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) S+=pow(-1,i+1)*fakt(3*i);
    printf("Suma je %d ", S);
    return 0;
}
