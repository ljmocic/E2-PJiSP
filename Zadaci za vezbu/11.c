#include<stdio.h>
#define MAX 30
int main()
{
	int i,n,A[MAX],k=0;
	do{
		printf("Unesi broj elemenata niza : ");
		scanf("%d",&n);
	}
	while(n<1);
	printf("Unesi redom clanove niza : \n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
		if (A[i]%2==0 && i%2!=0)k++;
	}
	printf("\nBroj parnih elemenata sa neparnim indexima je : %d \n",k);
	return 0;
}
