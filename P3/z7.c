#include<stdio.h>
#include<math.h>
int main()
{
    int n, i=0;
    double pi, R=0;
    
    printf("Unesite duzinu niza koja ce odrediti preciznost:");
    scanf("%d", &n);
    
    //prva formula
    
    for(i=0;i<n;i++)
    {
      R+=(1/(i*i))
    }
    pi=sqrt(6*R);
    printf("Vrednost pi-a po prvoj formuli je:%f", pi);
    
    //druga formula
    
    R=0;
    for(i=0;i<n;i++)
    {
      R+=pow(-1,i)/(2*i+1);           //primetimo da -1 na i odredjuje da li ce biti + tj. - u formuli :)
    }
    pi=4*R;
    printf("Vrednost pi-a po drugoj formuli je:%f", pi);
    
    //treca formula
    
    R=1;
    int pom1=2;
    int pom2=1;
    for(i=0;i<n;i++)
    {
      R=R*pom1/pom2;
      if(i%2==0) pom2+=2;
      else pom1+=2;
    }
    pi=2*R;
    printf("Vrednost pi-a po trecoj formuli je:%f", pi);
    
    //cetvrta formula
    
    R=3;
    int j;
    for(i=0;i<n-1;i++)                // ovde je n-1 jer smo prvi sabirak odma uzeli da je 3
    {
      j=2*(i+1);                        //nije neophodno, samo radi kraceg zapise u sledecem redu
      R+=pow(-1,i)*4/(j*(j+1)*(j+2));   //opet fora sa -1
    }
    pi=R;
    printf("Vrednost pi-a po cetvrtoj formuli je:%f", pi);
    
    return 0;
    
}
