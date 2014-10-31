
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,pom1=0,pom2=0;
	double s;
	
	do{
		printf("Unesi n tako da bude veci od 0 : ");
		scanf("%d",&n);
	} while(n<1);

	for(i=1;i<=n;i++){
		pom1=pom1+i;
		pom2=pom2+(i*i);	
	}
	
	s=pow((-1),(double)(n-1)) * double(pom1) / double (pom2);
	
	printf("Resenje je : %.2lf",s);
	
	return 0;
	
}
