#include <string.h>
#include "appel.h"

void charger_appels(Appel *appels) {

    FILE *fichier_repertoire = fopen("../message.txt", "r");

    if (!fichier_repertoire) {
        printf("Impossible d'ouvrir le fichier répertoire.\n");
        exit(1);
    }

    char ligne[255];
    int index_ligne = 0;

    char *p;

    while (fgets(ligne, sizeof(ligne), fichier_repertoire) && index_ligne < NBR_APPEL) {

        int i = 0;

        p = strtok(ligne, " ");

        while (p != NULL) {

            if (i == 0) {
                char *bad;
                p += 3;
                long num = strtol(p, &bad, 10);
                appels[index_ligne].numero = num;
            } else if (i == 1) {
                strcpy(appels[index_ligne].prenom, p);
            } else if (i == 2) {
                strcpy(appels[index_ligne].nom, p);
            } else if (i == 3) {

//                if (p[0] == 'S') {
//                    appels[index_ligne].type = SORTANT;
//                } else {
//                    appels[index_ligne].type = ENTRANT;
//                }

                appels[index_ligne].type = p[0] == 'S' ? SORTANT : ENTRANT;
            }

            p = strtok(NULL, " ");

            i++;

        }
        index_ligne++;
    }
}
