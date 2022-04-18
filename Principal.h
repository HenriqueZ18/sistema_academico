//
// Created by Henrique on 14/03/2022.
//

#ifndef SISTEMA_ACADEMICO_PRINCIPAL_H
#define SISTEMA_ACADEMICO_PRINCIPAL_H

#include "Pessoa.h"
#include "Universidade.h"
#include "Professor.h"
#include "Disciplina.h"
#include "Departamento.h"


using namespace std;

class Principal {

private:
    list<Universidade*> lUni;
    list<Departamento*> lDep;
    list<Disciplina*> lDis;

    int dia, mes, ano;
    int qtdUni, qtdDep, qtdDis;

public:
    Principal ();
    ~Principal();
    void Execute ();

    void cadDisciplina ();
    void cadDepartamento ();
    void cadUniversidade ();

    void menu ();
    void menuCad ();
    void menuExe ();

    void imprimeDisciplinas ();
    void imprimeDepartamentos ();
    void imprimeUniversidades ();

    Universidade* localizaUniversidade (char* n);

};

#endif //SISTEMA_ACADEMICO_PRINCIPAL_H
