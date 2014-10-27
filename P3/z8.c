#include<stdio.h>

int main()
{
  int n, S=0;      
  int i,j;
  int pom=1;
  
  printf("Unesite broj n:");
  scanf("$d",&n);
  
  for(i=1;i<n;i++)          //u ovoj petlji sabirmo n sabiraka
  {
    for(j=0;j<i;j++)        //u ovoj petlji trazimo i-ti sabirak
    {
      pom*=(i+j+1);
    }
    S+=pom;
    pom=1;
  }
  
  printf("Suma je:$d",S);
  
  return 0;
  
}
