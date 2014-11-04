#include<stdio.h>
#define MAX 30

int main(){
	float A[MAX],S=0;
	int n,i;
	do{
	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);
	}while(n<1);
	printf("Unesite clanove niza: \n");
	for(i=0;i<n;i++){
		printf("A[%d]=", i);
		scanf("%f", &A[i]);
		if(A[i]>0)S+=A[i];
	}
	printf("Suma svih pozitivnih clanova niza je: %.2f\n", S);
	return 0;
}
