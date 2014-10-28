#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 30
//Moze delovati malo konfuzno ali zbog upotrebe ASCII i stringova

int hex2dec(char hex[])
{
    int i, d, S=0;
    for(d=0; hex[d]!='\0'; ++d);
    for(i=0; hex[i]!='\0'; ++i, --d)
    {
        if(hex[i]>='0' && hex[i]<='9')
            S+=(hex[i]-'0')*pow(16,d-1);
        if(hex[i]>='A' && hex[i]<='F')
            S+=(hex[i]-55)*pow(16,d-1);
        if(hex[i]>='a' && hex[i]<='f')
            S+=(hex[i]-87)*pow(16,d-1);
    }
    return S;
}
int main()
{
    char hex[30];
    int n;
    printf("Unesi heksadekadni broj: ");
    scanf("%s",hex);
    printf("Dekadni broj: %d",hex2dec(hex));
    return 0;
}


//prostija verzija
#include <stdio.h>

int main ()
{

int hex;

printf("Unesi hexadecimalan broj: ");
scanf ("%x",&hex);
printf("%x je u decimalnom zapisu %d",hex,hex);

return 0;
}

