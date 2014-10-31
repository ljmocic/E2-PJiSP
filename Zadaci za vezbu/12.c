#include <stdio.h>
int main()
{
	int i,n,suma=0;
	
	do{
			printf("Koliko kupaca ceka red? ");
			scanf("%d",&n);
	}
	while(n<1);
	
	int A[n],A2[n];
	
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("Koliko min traje posluzivanje %d. kupca? ",i+1);
		scanf("%d",&A[i]);
		suma+=A[i];
		A2[i]=suma;
	}
	
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d. kupac ce cekati %d min \n",i+1,A2[i]);
	}
	
	return 0;
}
	
