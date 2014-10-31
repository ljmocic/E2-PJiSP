#include<stdio.h>

int main ()
{
	int n,k,i;
	double s=10;
	do{

		do{
			printf("Unesi prirodan broj n : ");
			scanf("%d",&n);
		} while (n<1);
		
		do{
			printf("Unesi prirodan broj k : ");
			scanf("%d",&k);
		} while(k<1);
	} while(k>=n);
	
	for(i=0;i<=n;i++)
	s=s+(1/(double)((k+i)*(k+i)));
	
	printf("Resenje ovoga je : %.3lf",s);
	
	return 0;
	
}
