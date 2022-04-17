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

void ListaDepartamento ::addDepartamento(Departamento *pd) {

    if (pd != NULL){

        ElDepartamento* aux = NULL;
        aux = new ElDepartamento();
        aux->setDepartamento(pd);

        if (first == NULL){
            first = aux;
            cur = aux;
        }
        else{
            cur->setNext(aux);
            aux->setPrev(cur);
            cur = aux;
        }
    }
    else{
        cout << "WARNING: O Ponteiro fornecido possui valor NULL!" << endl;
    }
}

void ListaDepartamento ::imprimeLista() {

    ElDepartamento* aux= NULL;
    aux = first;

    while (aux != NULL){
        cout << aux->getDepartamento()->getNome() << endl;

        aux = aux->getNext();
    }


}