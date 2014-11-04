#include<stdio.h>

float fakt(int x){
	int i;
	float R=1.0;
	for(i=2;i<=x;i++)R*=i;
	return R;
}

int main(){
	int n,i,j;
	float S=0.0,D=0.0;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)D+=1.0/(n+1);
		S+=fakt(i)/D;
	}
	printf("S=%.2f\n", S);
	return 0;
}
