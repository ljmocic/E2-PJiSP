#include<stdio.h>
#include<math.h>

int main(){
    int i,a,b,c;
    for(i=100;i<1000;i++){
    a=pow(i%10,3);
        b=pow(i%100/10,3);
        c=pow(i/100,3);
        if(i==(a+b+c)) printf("Broj %d je Armstrongov broj \n", i);
    }
    return 0;
}
