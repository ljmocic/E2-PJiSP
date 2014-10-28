#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,x;
    float R;
    printf("Unesite tri celobrojna broja: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Vrednost aritmeticke sredine je: %.2f \n", R=(a+b+c)/3);
    printf("Vrednost harmonijske sredine je: %.2f \n", R=3/(1/a+1/b+1/c));//geometrijsku i kvadratnu mozete sami, ista fora, druga formula
	return 0;
}
