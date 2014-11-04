#include<stdio.h>
#define MAX 30

int maxIntervala(int A[], int poc,int kraj){
	int i,max,maxI=poc;	
	max=A[poc];
	for(i=poc;i<=kraj;i++){
		if(A[i]>max){
			maxI=i;
			max=A[i];
		}
	}
	return maxI;
}
int minIntervala(int A[], int poc,int kraj){
	int i,min,minI=poc;	
	min=A[poc];
	for(i=poc;i<=kraj;i++){
		if(A[i]<min){
			minI=i;
			min=A[i];
		}
	}
	return minI;
}

int main(){
	int A[MAX],i,n,c,d,max,min;
	printf("Unesite n: ");
	scanf("%d",&n);
	printf("Unesite clanove niza:\n");
	for(i=0;i<n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	printf("Unesite c i d:");
	scanf("%d",&c);
	scanf("%d",&d);
	printf("Indeks min i max elementa niza u intervalu %d,%d je %d, %d\n",c,d,minIntervala(A,c,d),maxIntervala(A,c,d));
	return 0;
}
