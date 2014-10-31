// Skalarni proizvod n-dimenzionalnih vektora
#include<stdio.h>
 
int main()
{
	int n,i,pr=0;

		
	while(1) {
	
		printf("Unesi koliko dimenzija ce da budu vektori : ");
		scanf("%d",&n);

		if (n<1)
		{
			printf("\nVektori ne mogu imati manje u 1 dimenzije!! \n");
			break;
		}
		

	int nizx[n],nizy[n];
	
	printf("Unesi redom vrednosti za prvi vektor : \n");
	for (i=0;i<n;i++)
	{
		printf("X%d = ",i+1);
		scanf("%d",&nizx[i]);
	}
	
	printf("\n");
	
	printf("Unesi redom vrednosti za drugi vektor : \n");
		for (i=0;i<n;i++)
	{
		printf("Y%d = ",i+1);
		scanf("%d",&nizy[i]);
	}
	
	for (i=0;i<n;i++)
		pr=pr+nizx[i]*nizy[i];
		
	printf("\n");
		
	printf("Skalarni proizvod ova dva %d-dimenzionalna vektora je : %d \n\n",n,pr);
	
}

	return 0;
			
}
