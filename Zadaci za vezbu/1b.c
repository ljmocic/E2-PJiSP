#include<stdio.h>
#include<math.h>

int main(){
    int n, i;
    float S=0.0;
    printf("Unesi pozitivan ceo broj : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) S+=pow(i,1.0/i);
    printf("Suma je %.3f ", S);
    return 0;
}
