#include<stdio.h>
#define MAX 30

int main(){
	float A[MAX],S=0;
	int n,i,j,k=0,B[MAX];
	do{
	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);
	}while(n<1);
	for(i=0;i<n;i++)B[i]=0;
	printf("Unesite clanove niza: \n");
	for(i=0;i<n;i++){
		printf("A[%d]=", i);
		scanf("%f", &A[i]);
	}
	for(i=0;i<n;i++)for(j=0;j<n;j++)if(A[i]==A[j]){
		B[i]+=1;
		printf("%d\n", B[i]);
	}
	for(i=0;i<n;i++)if(B[i]==1)k++;
	printf("Broj razlicitih elemenata niza je %d \n", k);
	return 0;
}
