// Ovako nesto nece biti ali eto cisto ko voli malo kommplikovanije stvari
#include <stdio.h>
int main ()
{
	int i,j;
	double niz[100],n;   // neka bude najvise 100. Dosta je to
	
	printf("\n\n");
	
	for (i=0;i<100;i++)
	
		niz[i]=0.0;                // ovde nije lose da se resetuje niz

		
	for (i=0;i<51;i++)
		niz[i]=i+0.0;                 //zadacemo niz od 0-20 realnih brojeva
									  // moramo nekako da zadamo niz i neka bude taj
			printf("Niz : \n");
			for (i=0;i<100;i++)
			{
				if (niz[i]==0.0)
				printf(""); else
				printf("%.2lf ",niz[i]);
		
	}
		printf("\n\n");
	
	while(1) {
	
		printf("Unesi pozitivan realan broj : ");
		scanf("%lf",&n);
		
		printf("\n\n");	
			
		if (n<0.0)
		{	 printf("Uneo/la si nedozvoljeni vrednost! \n\n");   // ako se unese negativan broj
			printf("\t\t Aj sad mrs! \n");
			break;
		} 
		
			printf("\n\n");
		
		for (i=1;i<99;i++){
			if ((n>niz[i-1]) && (n<niz[i]))
			{
				for(j=99;j>=i;j--)
					niz[j]=niz[j-1];
				niz[i]=n;
			}

		}
			printf("Niz : \n");
			for (i=0;i<100;i++)
			{
				if (niz[i]==0.0)
				printf(""); else  // Zbog preglednosti, brojevi koji su 0.0 se ne ispisuju				
				printf("%.2lf ",niz[i]);  // Ispis "drugog" niza
		
	}
		printf("\n\n");
		
	}
	
	return 0;
}
		
