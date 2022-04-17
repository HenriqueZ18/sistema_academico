//
// Created by henrique on 17/04/22.
//

#include "ListaDisciplina.h"

using namespace std;

ListaDisciplina ::ListaDisciplina(char* n) {
    strcpy(nome, n);

    first = NULL;
    cur = NULL;

}
 ListaDisciplina :: ~ListaDisciplina() {

    ElDisciplina* aux1, *aux2;

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

void ListaDisciplina ::addDisciplina(Disciplina *pd) {

    if (pd != NULL){

        ElDisciplina* aux = NULL;
        aux = new ElDisciplina();
        aux->setDisciplina(pd);

        if (first == NULL){
            first = aux;
            cur = aux;
        }
        else {
            cur->setNext(aux);
            aux->setPrev(cur);
            cur = aux;
        }

    }
    else {
        cout << "WARNING: O pontteiro fornecido é NULL!" << endl;
    }
}

void ListaDisciplina ::imprimeLista() {

    ElDisciplina* aux = first;

    while (aux!= NULL){

        cout << aux->getDisciplina()->getNome() << endl;

        aux = aux->getNext();
    }
}