/* 2. Niz (maks 20). Ucitaj niz. 
Da li ima vise poz ili neg brojeva u nizu. 
Ako ima vise poz onda sve neg pretvoriti u poz. 
Obrnuto, sve poz u neg.
Ako ih ima jednako onda ostavi isti niz. 
Ispisi niz. 
Za maks broj bodova u ovom treba napisati funkcije,
koje ce gledati koliko ima poz i neg u nizu. */


/*Komentar: Ovaj zadatak je uradjen za MAX bodova, 
dakle sve je pisano u funkcijama! ( Da nije, bilo bi 200 redova...)
Proucite prenosenje vrednosti po referenci kako bi mogli da 
razumete program*/

#include <stdio.h>
#include <math.h>
#define MAX 20

/// Proverava koliko ima pozitivnih a koliko negativnih clanova niza
void provera(int array[], int size, int *neg, int *poz)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if (array[i] < 0)
            *neg += 1;
        if (array[i] > 0)
            *poz += 1;
        /// Nule se ne racunaju, to se podrazumeva

    }

}

/// Ispisuje niz
void ispisiNiz(int array[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("\n array[%d]: %d", i, array[i]);
    }
}


void unosNiza(int array[], int size)
{
    int i;

    for(i = 0; i < size; i++ )
    {
        printf("\n Unesite array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

/// Apsolutna vrednost svakog clana niza, sve prebacuje u pozitivne
void absoluteArray(int array[], int size )
{
    int i;

    for(i = 0; i < size; i++)
        array[i] = abs(array[i]);

}

/// negativna vrednost svakog clana niza, sve prebacuje u negativne
void negativeArray(int array[], int size)
{
    int i;

    for(i = 0; i < size; i++)
        if (array[i] > 0)
        array[i] *= -1;


}


/// glavna funkcija main
int main()
{
    int size, array[MAX], i, neg = 0, poz = 0;

    do
    {
        printf("Unesite velicinu niza. MAX je 30 \n");
        scanf("%d", &size);
    } while((size < 0) || (size > MAX));

    unosNiza(array, size);

    provera(array, size, &neg, &poz);

    printf("Pozitivnih ima: %d \n Negativnih ima: %d \n", poz, neg);
    if (poz > neg)
        absoluteArray(array, size);
    else
        if(neg > poz)
        negativeArray(array, size);

    ispisiNiz(array, size);
    
    return 0;

}
