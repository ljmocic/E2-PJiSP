/*
Učitati niz tačaka u ravni (maksimalno 30). Naći tačku koja je najbliža koordinatnom početku. Koristiti funkcije. 
*/
#include<stdio.h>
#include<math.h>
#define MAX 30

struct tacka {
	int x;
	int y;
};


int main(){
	struct tacka t1[MAX];
	int n,i=0,min,r=1;
	printf("Unesite broj tacaka:");
	scanf("%d",&n);
	for(i;i<n;i++){
		printf("Unesite x i y tacke %d\n",i+1);
		scanf("%d %d",&t1[i].x,&t1[i].y);
	}
	min=abs(t1[0].x-t1[0].y);
	for(i=1;i<n;i++){
		if(abs(t1[i].x-t1[i].y)<min)
			{
				min=abs(t1[i].x-t1[i].y);
				r=i;
			}
		
	}
	printf("Najbliza tacka koordinatnom sistemu je %d sa koordinatama %d %d\n",r,t1[r].x,t1[r].y);
	return 0;
}
