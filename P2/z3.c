#include<stdio.h>
#include<math.h>

int main(){
    float R,x;
    printf("Unesite broj x: ");
    scanf("%f", &x);
    if(x<0)R=-7;
    if(0<=x<1)R=pow(x,1/4);
    if(1<=x<13)R=2*sqrt(x)-5;
    if(x>=13)R=pow(x,2)/9;
    printf("Rezultat je %f", R);
    return 0;
}
