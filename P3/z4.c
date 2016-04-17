#include<stdio.h>

int main(){
    int q, n, i=2;
    printf("Unesite n i q: \n");
    scanf("%d", &n);
    scanf("%d", &q);
    while(i<n){
        if(i%q==0)printf("Broj %d je deljiv sa q\n", i);
        i++;
    }
}
