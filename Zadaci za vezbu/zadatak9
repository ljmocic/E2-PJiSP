#include <stdio.h>

int main() {
	int i, j, n;
	int m = 1;
	
	printf("Unesi dužinu niza: ");
	scanf("%d", &n);
	
	int A[n];
	
	for(i = 0; i < n; i++) {
		printf("Unesi %d. član: ", i+1);
		scanf("%d", &A[i]);
	}
	
	for(i = 0; i < n; i++)
		if(m == A[i]) {
			m++;
			i = 0;
		}
		
	for(i = 0; i < n; i++)
		for(j = i+1; j < n; j++)
			if(A[i] == A[j])
				A[j] = m;
				
	int s = n;
	
	for(i = 0; i < n; i++)
		if(A[i] == m)
			s--;
	
	printf("Broj različitih članova u nizu: %d\n", s);
	
	return 0;
}		
