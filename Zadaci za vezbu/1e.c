#include<stdio.h>
#include<math.h>

int main(){
    int n, i, j, k=-1;
    float S=0.0, P1=0.0, P2=0.0;
    printf("Unesi pozitivan ceo broj : ");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            P1+=i;
            P2+=pow(i,2);
        }
        S=S+pow(k,n-1)*P1/((float)P2);
    }
    printf("Suma je %.2f ",S);
    return 0;
}
