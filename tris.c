#include <time.h>
#include "tris.h"

void triABulles(Appel *appels) {

    printf("> Lancement du tri a bulles\n");

    clock_t t;
    t = clock();

    for (int i = 0; i < NBR_APPEL; i++) {
        for (int j = 0; j < NBR_APPEL - i - 1; j++) {
            if (appels[j].numero > appels[j + 1].numero) {
                Appel temp = appels[j];
                appels[j] = appels[j + 1];
                appels[j + 1] = temp;
            }
        }
    }

    printf("> Fin du tri à bulles, temps ecoule : %ld ms\n", clock() - t);
}

void triParInsertion(Appel *appels) {

    printf("> Lancement du tri par insertion\n");

    clock_t t;
    t = clock();

    Appel temp;
    int j;

    for (int i = 1; i < NBR_APPEL; i++) {
        temp = appels[i];
        j = i - 1;

        while (j >= 0 && appels[j].numero > temp.numero) {
            appels[j + 1] = appels[j];
            j = j - 1;
        }
        appels[j + 1] = temp;
    }

    printf("> Fin du tri par insertion, temps ecoule : %ld ms\n", clock() - t);
}