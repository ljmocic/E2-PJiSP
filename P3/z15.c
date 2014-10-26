/* Napisati program koji pronalazi prvi element
niza koji je najbliži srednjoj vrednosti niza celih
brojeva. Niz može da ima najviše 20
elemenata. */

#include <stdio.h>
#include <math.h>
#define MAX 20

int main()
{
    int brojClanova, i;
    double niz[MAX], prosek = 0, najbliziClanProseku, razlika;

    do {
        printf("Upisite koliko clanova zelite niz da sadrzi. MAX je 20 \n");
        scanf("%d", &brojClanova);
    } while (brojClanova > 20); /// Ova petlja se ponavlja sve dok korisnik ne ispostuje pravilo koje smo zadali, da niz moze imati MAX 20 elementa

   for (i = 0; i < brojClanova; i++){
    printf("Upisite %d. clan niza: ", i);
    scanf("%lf", &niz[i]);
    printf("\n");
    prosek += niz[i];
   }
    /// for petlja za unos clanova u niz
    /// prosek sabira sve clanove niz, posle delimo sa brojClanova kako bi dobili PROSEK

    prosek /= brojClanova;

    printf("Prosek ovog niza je %lf \n", prosek);

    najbliziClanProseku = niz[0];   /// najbliziClanProseku je zapravo resenje ovog zadatka, dodeljujemo n[0] zato sto moramo poceti od nekog clana
    int indexNajblizegClana = 0; /// Primer index niz[i] clana je i, ovo radimo kako bi bio lepsi ispisi na printf

    razlika = abs(niz[0] - prosek);

    /* abs je funkcija u math.h koja uzima absolutnu vrednost
    Zasto ovo radimo? Da bi izbegli vrednosti manje od nule, neki brojevi niza
    su iznad proseka a neki ispod */

    for ( i = 1; i < brojClanova; i++)
    {
        if (razlika > abs(niz[i] - prosek))
        {
            razlika = abs(niz[i] - prosek);
            najbliziClanProseku = niz[i];
            indexNajblizegClana = i;
        }
    }

    printf("Najblizi clan je  n[%d] a njena vrednost je %lf \n", indexNajblizegClana, najbliziClanProseku);
    return 0;

}
