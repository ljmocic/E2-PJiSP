#include<stdio.h>
#include<math.h>

int main(){
    int x=1;
    float R;
    if(x<0)R=-7;
    if(0<=x && x<1) R=pow(x,1/4)+4;
    if(1<=x && x<13) R=2*sqrt(x)-5;
    if(x>=13) R=pow(x,2)/9;
    printf("Rezultat je jednak %.2f", R);
    return 0;
}
