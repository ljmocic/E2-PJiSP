#include<stdio.h>

int main(){
    int b, i;
    for(i=100;i<1000;i++){
        b=pow((i/10),2)-pow(i%10,2);
        if(i==b)printf("Ovi broj ispunjava uslov zadatka %d \n", i, b);
    }
    return 0;
}
