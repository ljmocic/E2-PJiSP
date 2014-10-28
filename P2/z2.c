#include<stdio.h>

int main(){
    int a,b;
    printf("Unesite a i b: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b)printf("Broj %d je veci od broja %d. ", a,b);
    if(a<b)printf("Broj %d je veci od broja %d. ", b,a);
    if(a==b)printf("Brojevi su jednaki");
    return 0;
}
