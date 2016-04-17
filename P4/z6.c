#include <stdio.h>
#include <math.h>

void prost(int n)
{
    int i, k, j, l, p1, p2;
    for (i=1;i<n;i++){
        p1 = 1;
        for (k=2;k<i;k++)if(i%k==0)p1=0;
        if(p1){
            for (j=1; j<n; j++){
                p2=1;
                for(l=2; l<j; l++) if(j % l == 0)p2 = 0;
                if(p2)if(i+j==n && i!=1 && j!=1) printf("\n\n%d i %d su 2 prosta broja ciji zbir daje %d.\n",i,j,n);
            }
        }
    }
}
int main()
{
    int n;
    do{
        printf("Unesite paran broj veci od 2: ");
        scanf("%d", &n);
    }while (n%2!=0 || n <= 2);
    prost(n);
}
