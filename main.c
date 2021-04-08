#include <stdio.h>
#include "appel.h"
#include "tris.h"

int main() {
    Appel appels[1000];

    charger_appels(appels);

    // Tri à bulles
    triABulles(appels);

    // Tri par insertion
    triParInsertion(appels);


    for (int i = 0; i < NBR_APPEL; i++) {
        printf("%ld %s %s %u\n", appels[i].numero, appels[i].prenom, appels[i].nom, appels[i].type);
    }

    return 0;
}
