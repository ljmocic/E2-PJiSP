#include <stdio.h>
int main()
{
	int i,n,brojac=0;
	
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
		
		if (A[i]%2==0)
			if(i%2!=0)
				brojac++;
	}
	
	printf("\nBroj parnih elemenata sa neparnim indexima je : %d ",brojac);
	
	return 0;
}
