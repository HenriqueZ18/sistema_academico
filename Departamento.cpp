//
// Created by Henrique on 29/03/2022.
//
#include "Departamento.h"
#include "Universidade.h"
#include "ListaDisciplina.h"


Departamento:: Departamento (char *n){

    strcpy (nome, n);
    pUnivFiliado = nullptr;
    id = -1;
}

Departamento:: ~Departamento (){
    pUnivFiliado = nullptr;
    ldisciplina.clear();
}

void Departamento :: setNome (char* n){

    strcpy (nome, n);
}

char* Departamento :: getNome () {

    return nome;
}

void Departamento :: setId(int n) {
    id = n;
}

int Departamento :: getId() {
    return id;
}

void Departamento :: setUnivFiliado(Universidade *pu) {

    pUnivFiliado = pu;
}

void Departamento ::addDisciplina (Disciplina *d) {
    ldisciplina.push_back (d);
}

void Departamento ::imprimeDisciplinas() {

    list<Disciplina*>::iterator i;

    for (i = ldisciplina.begin(); i != ldisciplina.end(); i++){
        cout << (*i)->getNome() << endl;
    }
}

list<Disciplina*> Departamento :: getLista (){
    return ldisciplina;
}


