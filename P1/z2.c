#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,s,P;
    printf("Unesite stranice trougla: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    s=(a+b+c)/2;
    P=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Povrsina trazenog trougla je %.2f ", P);
    return 0;
}
