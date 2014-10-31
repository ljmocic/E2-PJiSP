//ovo je jako glup program da gljuplji ne moze da bude
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,pom=1,pom2;
	double x,s;
	
	do{
		printf("Unesi prirodan broj n :");
		scanf("%d",&n);
	}while (n<1);
	
	printf("Unesi realan broj x : ");
	scanf("%lf",&x);
	
	pom2=2*n+1;
	
	
	for(i=1;i<=pom2;i++)
	pom=pom*i;    // = (2n+1)!
	
	s=(pow((-1) , (double)(n)) / (double)pom) * (pow(x,(double)(pom)));
	
	printf("Resenje je : %.4lf   \n",s);
	return 0 ;  
	
}
