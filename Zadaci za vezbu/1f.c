//racunanje po formuli : ((-1)^n+1)*(3n)!
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double s,pom1=0.0,pom2=0.0;
	
	do{
		printf("Unesi n tako da bude veci od 0 : ");
		scanf("%d",&n);
	} while(n<1);
	
	for(i=0;i<=n;i++)
		pom1=pom1+cos(i);
		
	for(i=0;i<=n;i++)
		pom2=pom2+sin(i);
		
	s=pom1/pom2;
	
	printf("Resenje ovog zadatka je : %.3lf",s);
	
	return 0;
}
