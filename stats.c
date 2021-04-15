#include "stats.h"

void recuperer_informations(Appel *appels) {

    Numero nums[1000];

    int num_diff_index = 0;
    unsigned long dernier_num = 0;

    int maxAppelSortant = 0;
    unsigned long numAvecLePlusDAppelSortant = 0;

    int maxAppelEntrant = 0;
    unsigned long numAvecLePlusDAppelEntrant = 0;

    for (int i = 0; i < NBR_APPEL; i++) {

        if (dernier_num != appels[i].numero) {
            if (dernier_num != 0) {
                num_diff_index++;
            }

            nums[num_diff_index].sortant = 0;
            nums[num_diff_index].entrant = 0;

            nums[num_diff_index].numero = appels[i].numero;
            dernier_num = appels[i].numero;
        }

        if (appels[i].type == 0) {
            nums[num_diff_index].sortant++;
        } else {
            nums[num_diff_index].entrant++;
        }

        if (nums[num_diff_index].sortant > maxAppelSortant) {
            maxAppelSortant = nums[num_diff_index].sortant;
            numAvecLePlusDAppelSortant = nums[num_diff_index].numero;
        }


        if (nums[num_diff_index].entrant > maxAppelEntrant) {
            maxAppelEntrant = nums[num_diff_index].entrant;
            numAvecLePlusDAppelEntrant = nums[num_diff_index].numero;
        }
    }


    printf("> Tableau des appels\n");
    for (int i = 0; i < 25; i++) {
        printf("+33%ld - ", nums[i].numero);

        printf("S : ");
        for (int j = 0; j < maxAppelSortant / 10; j++) {
            printf(nums[i].sortant / 10 > j ? "*" : " ");
        }

        printf(" | \tE : ");
        for (int j = 0; j < maxAppelEntrant / 10; j++) {
            printf(nums[i].entrant / 10 > j ? "*" : " ");
        }
        printf("\n");
    }

    printf("> Plus gros contacts : \n");

    for (int i = 0; i < NBR_APPEL; i++) {
        if (numAvecLePlusDAppelEntrant == appels[i].numero) {
            Appel appel = appels[i];
            printf("%s %s (%ld) a appele Lena %d fois\n", appel.prenom, appel.nom, appel.numero, maxAppelEntrant);
            break;
        }
    }

    for (int i = 0; i < NBR_APPEL; i++) {
        if (numAvecLePlusDAppelSortant == appels[i].numero) {
            Appel appel = appels[i];
            printf("Lena a appele %s %s (%ld) %d fois\n", appel.prenom, appel.nom, appel.numero, maxAppelSortant);
            break;
        }
    }

}


