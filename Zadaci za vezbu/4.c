#include<stdio.h>

int main()
{
	int ab,c,i;
	
	printf("Trazeni brojevi su : \n");
	
	for(i=100;i<1000;i++)
	{
		ab=i/10;
		c=i%10;
		if ((ab*ab-c*c)==i)
			printf("%d \n",i);
	}
	
	return 0;
}
