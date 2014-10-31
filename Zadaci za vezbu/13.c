// Nisam bas najbolje skontao program . Nadam se da je ovo dobro :-)
#include<stdio.h>

void index(int *A ,int c , int d) // Deklaracija
{
	int i,mini,maxi,min,max;   //Lokalne promenljive koje vaze samo unutar index f-je
	
	max=A[c];   // Predpostavka za minimalni i maximalni element
	min=A[c];   
		
	for (i=c;i<=d;i++)
	{
		if (min>A[i])    // Kao neko racunanje
			mini=i;	
	}
	
	for (i=c;i<=d;i++)
	{
		if (max<A[i])
			maxi=i;}
						
	printf("\nIndex minimalnog elementa u datom intervalu je %d ,a maximalnog %d",mini,maxi);
				
}

int main()
{
	int n,c,d,i;
	
	do{
	
		printf("Unesi broj elemenata niza : ");
		scanf("%d",&n);
	}while(n<1);
	
	int A[n];
	
	printf("Unesi redom elemente niza \n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	
	do{
	
		printf("Unesi prvu granicu intervala : ");
		scanf("%d",&c);
		
		printf("Unesi drugu granicu intervala : ");
		scanf("%d",&d); }
		while(c>=d);
	
	 index(A,c,d); // Poziv funkcije
	
	return 0;
	
}
