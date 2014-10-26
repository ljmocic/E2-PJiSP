#include <stdio.h>
#include <stdlib.h>

int sumacif(int n)
{
int sum;
if ((n>=0)&&(n<10))
    return n;
else {
    sum=n%10+sumacif(n/10);
    return sum;
}
}
int main(){
int n;
printf("Unesite n: ");
scanf("%d",&n);
printf("Rezultat je: %d", sumacif(n));
return 0;
}
