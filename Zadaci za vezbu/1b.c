//racunanje n-tog korena iz n

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double rez=0.0,pom;
	printf("Unesi pozitivan ceo broj : ");
	scanf("%d",&n);
	pom=1/(double)n;
	rez=pow(n,pom);
	printf("Resenje je %.3lf ",rez);
	return 0;
}
