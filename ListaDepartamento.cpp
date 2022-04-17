//
// Created by henrique on 17/04/22.
//

#include "ListaDepartamento.h"

ListaDepartamento ::ListaDepartamento(char *n) {
    strcpy(nome, n);

    first = NULL;
    cur = NULL;
}

ListaDepartamento :: ~ListaDepartamento() {

    ElDepartamento *aux1, *aux2;

    aux1 = first;
    aux2 = aux1;

    while (aux1 != NULL){
        aux2 = aux1->getNext();
        delete aux1;
        aux1 = aux2;
    }

    first = NULL;
    cur = NULL;
}