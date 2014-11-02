#include<stdio.h>
#include<math.h>

int main(){
    float S=0;
    int i,n;
    printf("Unesite n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)S+=(3+2*i)/pow(2,i);
    printf("Suma je: %0.2f", S);
    return 0;
}
