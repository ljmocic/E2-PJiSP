/*1. unesi 2 poz. broja sa 
ogranicenjem m<n. Ako je m neparan racunaj sumu svih
brojeva deljivih sa tri u tom intervalu. Ako je m paran onda
racunaj s=n/2+n/4+...+n/m isto u intervalu (m,n) . */

#include<stdio.h>

int main()
{
	int i,m,n;
	double suma=0.0;
	
		do{
			printf("Unesi m>0 : ");
			scanf("%d",&m);
		} while (m<1);
		
		do{
			printf("Unesi n tako da je m<n : ");
			scanf("%d",&n);
		} while(n<1 || n<m+1);
		
		
		if ((m%2)==1){
			for(i=m+1;i<n;i++)
				if ((i%3)==0)
					suma+=i;
		printf("Suma svih brojeva koji su deljivi sa 3 u intervalu od %d do %d je %.0lf \n",m,n,suma);
	}
	
	
	if ((m%2)==0)
	{
		for(i=2;i<=m;i+=2)
			suma+=(float)n/i;
		printf("Resenje je : %.2lf  ",suma);
	}
	
	
}
