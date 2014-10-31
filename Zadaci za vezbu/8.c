#include <stdio.h>
int main()
{
	int n,i,j,pom;
	
	while (1) {
	
	printf("Unesi broj clanova za 2 osnovna niza : ");
	scanf("%d",&n);
	
	if(n<1){
		printf("\n Niz ne moze imati manje od 1 clana! \n");
		break;
	}
	
	int A[n],B[n],X[2*n];   // Mora imati duplo vise clanova se se svi smeste
	
	printf("\n\n");
	
	printf("Unesi redom clanove niza za niz A : \n");
	for(i=0;i<n;i++){
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	
	printf("Unesi redom clanove niza za niz B : \n");
	for(i=0;i<n;i++){
		printf("B[%d] = ",i);
		scanf("%d",&B[i]);
	}
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		if (A[i]<A[j])
		{
			pom=A[j];
			A[j]=A[i];
			A[i]=pom;	
			
		}
		
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		if (B[i]<B[j])
		{
			pom=B[i];
			B[i]=B[j];
			B[j]=pom;
				
		}	
	
	printf("\nNiz A : \n");
	for(i=0;i<n;i++)
		printf("A[%d] = %d \n",i,A[i]); // ispis niza A
		
	printf("\n\n");
		
	printf("Niz B : \n");
	for(i=0;i<n;i++)
		printf("B[%d] = %d \n",i,B[i]); //Ispis niza B
		
	for(i=0;i<n;i++)
		X[i]=A[i];					// Kopiranje nizova u niz X
	for(i=n;i<=(2*n)-1;i++)
		X[i]=B[i-n];
	
		for(i=0;i<=(2*n);i++)
		for(j=0;j<=(2*n);j++)
		if (X[i]<X[j])              // Sredjivanje elemenata u X
		{
			pom=X[i];
			X[i]=X[j];
			X[j]=pom;
				
		}	
		
	printf("\n\nNiz X : \n");	
	for(i=0;i<(2*n);i++)
		printf("X[%d] = %d \n",i,X[i]);	 // Ispis niza X	
		
			printf("\n\n");
		
			
}
	return 0;
	
}
