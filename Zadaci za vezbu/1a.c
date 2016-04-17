#include<stdio.h>
#include<math.h>

int main(){
    int i, n;
    float S=0;
    printf("Unesite n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) S+=(3+2*i)/pow(2,i);
    printf("Suma je: %.2f", S);
    return 0;
}
