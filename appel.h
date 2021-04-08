#ifndef TP_POLICE_APPEL_H
#define TP_POLICE_APPEL_H

#include <stdlib.h>
#include <stdio.h>

#define NBR_APPEL 1000

enum type_appel {
    SORTANT, ENTRANT
};

typedef struct appel {
    unsigned long numero;
    char prenom[30];
    char nom[30];
    enum type_appel type;
} Appel;

void charger_appels(Appel *);

#endif
