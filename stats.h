#ifndef TP_POLICE_STATS_H
#define TP_POLICE_STATS_H

#include "appel.h"

typedef struct numero {
    unsigned long numero;
    int sortant;
    int entrant;

} Numero;

void *recuperer_informations(Appel *);

#endif //TP_POLICE_STATS_H
