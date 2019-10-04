/*
Completez les fonctions suivantes :
    * rechercheElem, qui recherche si un element donne elem est present dans un 
    tableau tab de taille size et retourne vrai ou faux.
    * decaleTab, qui implemente l'algorithme decrit dans l'Exercice 1 pour un
    tableau avec size éléments
    * fusionNaive et fusionMaligne, qui implementent les algorithmes decrits 
    dans l'Exercice 2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define N 10
#define N1 5
#define N2 10

bool rechercheElem (int tab[], unsigned int size, int elem) 
{
    for(int i=0; i<size; i++)
        {
        if(elem == tab[i])
        return true;
        }
        return false;
}

void decaleTab (int tab[], unsigned int size, int k) 
{
    if(k >= size) {
        printf("veuillez saisir une valeur valide");
    }else{
        for(int i=size-1; i>k; i--)
        {tab[i]=tab[i-1];}
    }

}

void fusionNaive (int tab1[], unsigned int size1, int tab2[], unsigned int size2, int newTab[]) {
    int sizeNewTab = size1 + size2;

    for(int i=0; i<size1; i++)
    {newTab[i] = tab1[i]}

    for(int j=0; j<size2; j++)
    {
        if(newTab[j] =< tab2[j])
        {
            decaleTab(newTab[], sizeNewTab, j)
            newTab[j] = tab2[j]
        }
    }

}

void fusionMaligne (int tab1[], unsigned int size1, int tab2[], unsigned int size2, int newTab[]) {
    // we consider that newTab has the correct size : size1 + size2
    // TO DO
}

int main() {
    int tab[N];
    int elem1, elem2;
    unsigned int i;
    
    srand(time(NULL));    

    for(i = 0; i < N; ++i) {
	    tab[i] = rand()%100;
    }
    elem1 = tab[N-1];
    elem2 = 100;

    printf("tab was initialised with : \n");
    for(i = 0; i < N; ++i) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    //TO DO
    //Testez les fonctions rechercheElem et decaleTab
    
    unsigned int newN = N1 + N2;
    int tab1[N1], tab2[N2], newTab[newN];
    
    for(i = 0; i < N1; ++i) {
        tab1[i] = i * 3;
    }
    printf("tab1 was initialised with : \n");
    for(i = 0; i < N1; ++i) {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    
    for(i = 0; i < N2; ++i) {
        tab2[i] = i;
    }
    printf("tab2 was initialised with : \n");
    for(i = 0; i < N2; ++i) {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    
    for(i = 0; i < newN; ++i) {
        newTab[i] = 0;
    }
    
    //TO DO
    //Testez les fonctions fusionNaive et fusionMaligne
    
    return EXIT_SUCCESS;
}