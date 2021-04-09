#include "stats.h"

void *recuperer_informations(Appel *appels) {

    Numero nums[1000];

    int num_diff_index = 0;
    unsigned long dernier_num = 0;

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

        printf("%d\n", appels[i].type);

        if (appels[i].type == 0) {
            nums[num_diff_index].sortant++;
        } else {
            nums[num_diff_index].entrant++;
        }
    }

    int somme = 0;

    for (int i = 0; i < num_diff_index; ++i) {
        printf("%ld %d %d\n", nums[i].numero, nums[i].sortant, nums[i].entrant);
        somme+= nums[i].sortant + nums[i].entrant;
    }

    printf("Somme : %d", somme);
}