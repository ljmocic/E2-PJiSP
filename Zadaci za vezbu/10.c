#include <stdio.h>
int main()
{
	int i,n,suma=0;
	
	do{
			printf("Unesi broj elemenata niza : ");
			scanf("%d",&n);
	}
	while(n<1);
	
	int A[n];
	
	printf("\nUnesi redom clanove niza : \n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
		
		if (A[i]>0)
			suma+=A[i];
	}
	
	printf("\nSuma svih pozitivnih brojeva je : %d",suma);
	
	return 0;
	
}
