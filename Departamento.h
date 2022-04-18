//
// Created by Henrique on 29/03/2022.
//

#ifndef SISTEMA_ACADEMICO_DEPARTAMENTO_H
#define SISTEMA_ACADEMICO_DEPARTAMENTO_H

#include <cstring>
#include <iostream>
#include <list>

using namespace std;

class Disciplina;
class Universidade;

class Departamento {

private:

    char nome [130];
    int id;
    Universidade* pUnivFiliado;
    list<Disciplina*> ldisciplina;

public:

    Departamento (char* n = "");

    ~Departamento();

    void setNome (char *n);
    char* getNome ();

    void setId (int id);
    int getId ();

    void setUnivFiliado (Universidade* pu);

    void addDisciplina (Disciplina* d);

    void imprimeDisciplinas ();

    list<Disciplina*> getLista ();


};

#endif //SISTEMA_ACADEMICO_DEPARTAMENTO_H
