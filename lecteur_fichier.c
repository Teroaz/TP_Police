#include "lecteur_fichier.h"

Appel* charger_appels() {

    FILE* fichier_repertoire = fopen("message.txt", "r");

    if (!fichier_repertoire) {
        printf("Impossible d'ouvrir le fichier répertoire.\n");
        exit(1);
    }


    // Test mise à jour
}

