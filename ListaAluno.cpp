//
// Created by henrique on 17/04/22.
//

#include "ListaAluno.h"

using namespace std;


ListaAluno ::ListaAluno(int maxf, char *n) {

    max = maxf;
    alunos = 0;
    strcpy (nome, n);

    first = NULL;
    cur = NULL;
}

ListaAluno :: ~ListaAluno() {

    ElAluno* aux1, *aux2;

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

void ListaAluno ::addAluno(Aluno *pa) {

    if ((alunos < max) && pa != NULL){

        ElAluno* aux = NULL;
        aux = new ElAluno();
        aux->setAluno(pa);

        if (first == NULL){
            first = aux;
            cur = aux;
        }
        else{
            cur->setNext(aux);
            aux->setPrev(cur);
            cur = aux;
        }
        alunos++;
    }
    else {
        if (pa != NULL)
            cout << "WARNING: Turma cheia. O aluno nao pode ser adicionado!" << endl;
        else
            cout << "WARNING: Ponteiro fornecido eh nulo!" << endl;
    }
}

void ListaAluno ::imprimeLista() {

    ElAluno* aux = first;

    while (aux != NULL){

        cout << (aux->getAluno())->getNome() << endl;

        aux = aux->getNext();

    }
}

