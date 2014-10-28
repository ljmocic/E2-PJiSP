#include<stdio.h>

int main(){
    int b,i;
    for(i=100;i<1000;i++){
        b=(i/100*10)+(i%10);
        if(i%b==0)printf("Broj %d je deljiv sa brojem %d \n", i, b);
    }
    return 0;
}
