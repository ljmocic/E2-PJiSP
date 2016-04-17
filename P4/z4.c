#include<stdio.h>
#include<math.h>

int fakt(int n){
    int P=1;
    do{
        P*=n;
        n--;
    }while(n!=1);
    return P;
}

int main(){
    int i;
    printf("Trazeni brojevi su:");
    for(i=100;i<1000;i++) if(i==(fakt(i/100)+fakt(i%10)+fakt(i%100/10))) printf("%d\n", i);
    return 0;
}
