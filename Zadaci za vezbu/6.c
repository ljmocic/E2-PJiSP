#include<stdio.h>
int main()
{
	int i,n,pom,j;
	
	while(1) {
		
		printf("Unesi broj elemenata niza : ");
		scanf("%d",&n);
		
		if (n<=0)
		{
			printf("\n\nNe moze tako. Bye Bye!!!  \n");
			break;
		}

	
	int niz[n];
	
	printf("Unesi redom clanove niza : \n");
	for(i=0;i<n;i++){
		printf("niz[%d] = ",i);
		scanf("%d",&niz[i]);
	}
	
	printf("\n");
	
	printf("Prvobitan niz : \n");
	
	for(i=0;i<n;i++)
		printf("%d ",niz[i]);
		
		printf("\n\n");
	
	j=n-1;
	
	for(i=0;i<(n/2);i++)
	{
		pom=niz[i];
		niz[i]=niz[j];
		niz[j]=pom;
		j--;
	}
	printf("Obradjeni niz : \n");	
		for(i=0;i<n;i++)
		printf("%d ",niz[i]);
		
		printf("\n\n");
		
	}
		
		return 0;
}
