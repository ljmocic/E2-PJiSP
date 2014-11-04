#include<stdio.h>
#define MAX 30

int main(){
	float A[MAX],t;
	int i,j,n;
	printf("Unesite broj clanova niza: ");
	scanf("%d", &n);
	printf("Unesite clanove niza: \n");
	for(i=0;i<n;i++){
		printf("A[%d]=", i);
		scanf("%f", &A[i]);
	}	
	j=n-1;
	for(i=0;i<n/2;i++){
		t=A[i];
		A[i]=A[j];
		A[j]=t;
		j--;
	}
	for(i=0;i<n;i++)printf("A[%d]=%f\n", i,A[i]);
	return 0;
}
