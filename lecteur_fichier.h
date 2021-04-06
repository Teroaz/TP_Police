#ifndef TP_POLICE_LECTEUR_FICHIER_H
#define TP_POLICE_LECTEUR_FICHIER_H

#include <stdlib.h>
#include <stdio.h>

enum type_appel {SORTANT, ENTRANT};

typedef struct appel {
    int numero;
    char* prenom;
    char* nom;
    enum type_appel type;
} Appel;


#endif //TP_POLICE_LECTEUR_FICHIER_H
