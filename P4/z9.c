#include <stdio.h>

int nzd(int x, int y)
{
    if(x==0)return y;
    else if(y==0)return x;
    else return(nzd(y%x, x));
}

int main()
{
    int x,y;
    printf("Unesite x i y: ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("NZD je %d",nzd(x,y));
    return 0;
}

