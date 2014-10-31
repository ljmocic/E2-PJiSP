//racunanje po formuli : ((-1)^n+1)*(3n)!
#include<stdio.h>
#include<math.h>
int main()
{
	int n,pom=1,i,pom2;
	double s;
	do {
		printf("Unesi pozitivan ceo broj n : ");
		scanf("%d",&n);
	}while(n<1);
	
	pom=3*n;
	pom2=pom;
	
	for(i=1;i<=pom2;i++)   //racunanje (3n)!
		pom=pom*i;
	
	s=pow((-1),(double)(n+1))*pom;
	
	printf("Resenje je : %.2lf ",s);
	
	return 0;
	
}
