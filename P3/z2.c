#include<stdio.h>

 int main(){
    int a, b, c, i, R=0;
    printf("Unesite a i b: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Unesite broj zeljene operacije: \n");
    printf("\t 1. Mnozenje\n");
    printf("\t 2. Delenje\n");
    scanf("%d", &c);
    if(c==1) for(i=1;i<=b;i++) R=R+a;
    if(c==2){
        while(a>=b){
            a=a-b;
            R++;
        }
    }
    printf("Rezultat je: %d \n", R);
}
