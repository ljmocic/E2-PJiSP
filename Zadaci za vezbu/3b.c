#include<stdio.h>

int main()
{
	int i,n,k,s=1;
	
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
	
	for (i=0;i<=n;i++)
		s=s*(k+i*n);
	
	printf("Konacno resenje je : %d",s);
	
	return 0;
	
}
