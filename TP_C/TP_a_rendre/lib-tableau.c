#include <stdlib.h>
#include <stdio.h>


    static void usage(char * commande) {
        fprintf(stderr,"%s <integer array size> \n", commande);
        exit(EXIT_FAILURE);
    }

    int main(int argc, char*argv[]) {
        int size = argc-1;
        if ((argc =! 2)){
            usage(argv[0]);
        }
    int* tab;



    tab = (int*) malloc(size * sizeof(int));

        if (tab == NULL) {
        fprintf(stderr, "not enough memory!\n");
        return EXIT_FAILURE;
    }

    for (int i=0; i<size; i++){
        tab[i] = atoi(argv[size-i]);
    }

    for (int i=0; i<size; i++){
        printf("tab = %d \n", tab[i]);
    }



    free(tab);
    tab = NULL;
    return EXIT_SUCCESS;
}