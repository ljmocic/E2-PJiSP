/*niz (maks 20), Ucitati niz. Da li ima vise pozitivnih ili negativnih brojeva
u nizu. Ako ima vise + onda sve negativne pretvoriti u poz i obrnuto ako ima 
vise negativnih  onda poz u neg. Ako ih je jendako ostaviti isti niz.
ispisati niz. Za maks bodova koristiti f-je koje gledaju koliko ima + i - u nizu.*/


#include<stdio.h>
#include<math.h>
#define MAX 20

///funkcija pozitivni?
int pozitivni (int n, int *a) {
	int i,p=0;//p: br pozitivnih
	for (i=0; i<n; i++) {
		if(a[i]>0)
		p++;
	}
	return p;
}

///funkija negativni?
int negativni (int n, int *a) {
	int i,neg=0;//p: br negativnih
	for (i=0; i<n; i++) {
		if(a[i]<0)
		neg++;
	}
	return neg;
}

int main ()	
{
int i,n,a[MAX],l,k;

do {
	printf("UNesite broj clanova niza od 1 do %d: ",MAX);
	scanf("%d",&n);
	} while (n<1 || n>MAX);
	
printf("Unesite claonve niza: \n");	
for (i=0; i<n; i++) {	
	printf("a[%d]=" ,i);
	scanf("%d", &a[i]);
}	

l=pozitivni(n,a); /// l: pozitivni brojevi
k=negativni(n,a); /// k: negativni brojevi	

///ispis broja pozitivnih i negativnih br
printf("\nPozitivnih brojeva ima : %d\n" ,l);
printf("Negativnih brojeva ima . %d\n\n",k);

for(i=0; i<n; i++) {
	if (l==k) 
	a[i]=a[i];
		else {
			if (l>k)
			a[i]=abs(a[i]);
			else 
			a[i]=-abs(a[i]);
		}
	
}

printf("Krajnji niz je: \n");
for(i=0; i<n; i++) {
	printf("a[%d]=%d\n",i,a[i]);
}


return 0;
}
