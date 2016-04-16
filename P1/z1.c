#include <stdio.h>
#include <math.h>

int main(){
    float s, P, a=2.0, b=4.0, c=5.0;
    s=(a+b+c)/2;
    P=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("P = %f\n",P);
    return 0;
}
