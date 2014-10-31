#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,n_fak=1;
	double pom=0.0,s;

	do{
		printf("Unesi n>2 : ");
		scanf("%d",&n);
	}
	while(n<2);
	
	for (i=2;i<=(n+1);i++)
		pom=pom+(1/(double)i);
	
	for(i=1;i<=n;i++)
		n_fak=n_fak*i;
	
	s=(double)(n_fak)/pom;
	
	printf("Resenje je : %.2lf ",s);
	
	return 0;
}
	
