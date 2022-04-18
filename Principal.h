//
// Created by Henrique on 14/03/2022.
//

#ifndef SISTEMA_ACADEMICO_PRINCIPAL_H
#define SISTEMA_ACADEMICO_PRINCIPAL_H

#include "Universidade.h"
#include "Professor.h"
#include "Disciplina.h"
#include "Departamento.h"
#include "Aluno.h"


using namespace std;

class Principal {

private:
    list<Universidade*> lUni;
    list<Departamento*> lDep;
    list<Disciplina*> lDis;
    list<Aluno*> lAlu;

    int dia, mes, ano;
    int idDep, idDis, idUni, idAlu;

public:
    Principal ();
    ~Principal();
    void Execute ();

    void cadDisciplina ();
    void cadDepartamento ();
    void cadUniversidade ();
    void cadAluno ();

    void menu ();
    void menuCad ();
    void menuExe ();

    void imprimeDisciplinas ();
    void imprimeDepartamentos ();
    void imprimeUniversidades ();
    void imprimeAluno ();

    Universidade* localizaUniversidade (char* n);
    Departamento* localizaDepartamento (char* n);
    Disciplina* localizaDisciplina (char* n);

};

#endif //SISTEMA_ACADEMICO_PRINCIPAL_H
