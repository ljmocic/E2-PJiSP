/// Verzija zadatka koja nije za maks bodova (bez funkcija i prenosa po referenci)

#include <stdio.h>


int main()
{
	int i,n,poz=0,neg=0,brPoz=0,brNeg=0;
	do{
		
		printf("Unesi broj clanova niza (najvise 30 i naravno vise od 0) : ");
		scanf("%d",&n);
	}	while (n<1 || n>30); //Ogranicenje
	
	int niz[n];

	printf("\n\nUnesi redom clanove niza : \n");
	for(i=0;i<n;i++)
	{
		printf("Niz[%d] = ",i);
		scanf("%d",&niz[i]);
		
		if (niz[i]<0)  //Ispitivanje koliko ima 
			neg++;
		if (niz[i]>0)
			poz++;
	}
	
	
	if (poz>neg)
		printf("\nU prvobitnom nizu ima vise pozitivnih clanova\n");
	if (poz<neg)
		printf("\nU prvobitnom nizu ima vise negativnih clanova\n");
	if (poz==neg)
		printf("\nU prvobitnom nizu ima jednako pozitivnih i negativnih clanova\n");



	if (poz>neg)   // prebacivanje poz u neg i obrnuto
		for(i=0;i<n;i++)
			if(niz[i]<0)
				niz[i]*=-1;
				
	if (poz<neg)
		for(i=0;i<n;i++)
			if(niz[i]>0)
				niz[i]*=-1;
				
	printf("\n\nNiz : \n");		
	for(i=0;i<n;i++)	
		printf("niz[%d] = %d \n",i,niz[i]);   // ispis konacnog niza
		

	
	return 0;
}
