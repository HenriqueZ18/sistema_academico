//
// Created by Henrique on 16/04/2022.
//

#include "Disciplina.h"



Disciplina::Disciplina(char* n, int maxF, int alunosF) {

    strcpy (nome, n);
    pDepFiliado = nullptr;
    max = maxF;
    alunos = alunosF;

    //first = NULL;
    //cur = NULL;
}

Disciplina:: ~Disciplina() {

    pDepFiliado = nullptr;
    lalunos.clear();

    /*
    ElAluno* aux = first;

    while (first != NULL) {
        first = first->getNext();
        delete aux;
        aux = first;
    }
     */

}

void Disciplina::setNome(char *n) {

    strcpy (nome, n);
}

char* Disciplina::getNome() {
    return nome;
}

void Disciplina::setDepFiliado(Departamento *p) {

    pDepFiliado = p;
    p->addDisciplina(this);
}

Departamento* Disciplina :: getDepFiliado (){
    return pDepFiliado;
}

void Disciplina :: addAluno (Aluno* a){

    if (alunos < max) {
        lalunos.push_back (a);
        alunos++;
    }
    else
        cout << "Esta disciplina atingiu o valor maximo de alunos!";
};

void Disciplina ::delAluno(Aluno *a) {

    lalunos.remove(a);
    alunos--;

}

void Disciplina ::imprimeAlunos() {

    list<Aluno*>::iterator i;

    for (i = lalunos.begin(); i != lalunos.end(); i++)
        cout << (*i)->getNome() << endl;

}

void Disciplina :: setId (int n){
    id = n;
}

int Disciplina ::getId() {
    return id;
}





/*
 * Para efeitos de aprendizado foi feito a implementaçao da lista encadeada de acordo com os videos
 * No entanto, ela (a lista implementada pelo propio aluno) nao foi utilizada, mas sim o elemento lista
 * da biblioteca list.
void Disciplina :: incluiAluno(Aluno *a) {


    if ((alunos < max) && a != NULL){

        ElAluno* aux = NULL;
        aux = new ElAluno();
        aux->setAluno(a);

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
    else{
        if (a != NULL)
            cout << "Nao foi possivel incluir este aluno pois a disciplina esta lotada!" << endl;

        else
            cout << "Ponteiro Nulo" << endl;
    }
}
*/
