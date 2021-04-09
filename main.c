#include <stdio.h>
#include "appel.h"
#include "tris.h"
#include "stats.h"

int main() {
    Appel appels[1000];

    charger_appels(appels);

    // Tri à bulles
    //triABulles(appels);

    // Tri par insertion
    triParInsertion(appels);

    recuperer_informations(appels);

    return 0;
}
