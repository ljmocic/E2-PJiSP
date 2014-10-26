#include<stdio.h>
#include<math.h>

int prost(int n){
    int i=2;
    for(i;i<n;i++)if(n%i==0)return 0;
    return 1;
}

int prost1(int n)           //efikasniji prost-parne brojeve odma eliminisemo iz provere
{                           //za neparne idemo samo do korena broja, jer brojevi veci od korena nece deliti n
    if(n==2)return 1;
    else if(n%2==0)return 0;
    else
    {
        double koren=sqrt(n);
        int i=3;                        //znamo da nije deljivo sa 2 zbog provere u 14 redu koda
        while(i<=koren)
        {
            if(n%i==0) return 0;        //ako nadjemo delilac, izadjemo iz funkcije i vratimo 0, tj. broj nije prost
        }
        
        return 1;           //ako je ceo while prosao, znaci da nismo nasli delilac broja (inace bi vec izasli iz funkcije)
    }
}

int main(){
    int n,i;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("Ovo su prosti brojevi do %d : \n", n);
    for(i=3;i<=n;i++)if(prost(i)==1)printf("%d\n",i);
    return 0;
}
