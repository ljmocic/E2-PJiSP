#include<stdio.h>
#include<math.h>

int main(){
    int n, i, j, k;
    float S=10.0, P=0.0;
    do{
    printf("Unesi pozitivan ceo broj: ");
    scanf("%d",&n);
    }while(n<1);
    do{
        printf("Unesi realan broj k (k mora biti manje od n): ");
        scanf("%d",&k);
    }while(k>n);
    for (k;k<=n;k++){
        P=pow(k,2);
        S+=1/(float)P;
    }
    printf("Suma je %.3f ",S);
    return 0;
}
