#include "utilitaires.h"

int generer_num_aleatoire(int min, int max) {

    srand(time(NULL));

    return ((rand() % (int) (((max) + 1) - (min))) + (min));
}
