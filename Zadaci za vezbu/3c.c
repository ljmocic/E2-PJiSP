#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,k;
	double s=0.0;
	
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

	for(i=0;i<=k;i++)
		s=s+pow((-1),(double)(k+1))*1/(double)(n+i*k);
		
	printf("Najzad,resenje ovoga je : %.2lf",s);
	return 0;
}
