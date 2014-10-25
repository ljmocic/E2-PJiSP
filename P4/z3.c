#include<stdio.h>
#define MAX 30
int suma(int *A, int d){
    int S=0,i=0;
    for(i;i<d;i++)S+=A[i];
    return S;
}
int min(int *A, int d){
    int i,minimalni=A[0];
    for(i=0;i<d;i++)if(A[i]<minimalni)minimalni=A[i];
    return minimalni;
}
int max(int *A, int d){
    int i,maksimalni=A[0];
    for(i=0;i<d;i++)if(A[i]>maksimalni)maksimalni=A[i];
    return maksimalni;
}
void ispis(int *A, int d){
    int i;
    printf("Clanovi niza su: \n");
    printf("%d",A[0]);
    for(i=1;i<d;i++)printf(", %d", A[i]);
    printf("\n");
}
float avg(int *A, int n){
    return suma(A,n)/n;
}

int main(){
    int A[MAX],n,i,b;
    printf("Unesite broj clanova niza: ");
    scanf("%d",&n);
    printf("Unesite clanove niza: \n");
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    do{
        printf("\n");
        printf("Opcije: \n\n");
        printf("\t 1. Izracunavanje sume.\n");
        printf("\t 2. Racunanje srednje vrednosti.\n");
        printf("\t 3. Nalazenje minimuma.\n");
        printf("\t 4. Nalazenje maksimuma.\n");
        printf("\t 5. Ispis elemenata.\n");
        printf("\n\t>>");
        scanf("%d", &b);
        switch(b) {
            case 1: printf("Suma svih elemenata u nizu je: %d\n", suma(A,n)); break;
            case 2: printf("Aritmeticka sredina niza je: %.2f\n", avg(A,n)); break;
            case 3: printf("Minimalna vrednost u nizu je: %d\n", min(A,n)); break;
            case 4: printf("Maximalna vrednost u nizu je: %d\n", max(A,n)); break;
            case 5: ispis(A,n); break;
    }
    }while(b!=5);
    return 0;
}
