#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    float x,R;
    printf("Unesite a i b: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==0)    //kada je a=0 jednaicna moze imati 0 ili beskonacno resenja u zavisnosti od vrednosti parametra b
    {
        if(b!=0)
             printf("Nemoguce resiti jednacinu, a mora biti razlicito od 0.");
        else
            printf("Jednacina ima beskonacno resenja.")
    }
    else printf("Rezultat je %.2f", R=-b/a);
}
