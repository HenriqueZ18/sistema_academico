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
    void menuGrava ();
    void menuRecupera ();

    void imprimeDisciplinas ();
    void imprimeDepartamentos ();
    void imprimeUniversidades ();
    void imprimeAlunos ();

    Universidade* localizaUniversidade (char* n);
    Departamento* localizaDepartamento (char* n);
    Disciplina* localizaDisciplina (char* n);

    void gravaAlunos ();
    void gravaUniversidades ();
    void gravaDepartamentos ();
    void gravaDisciplinas ();
    void gravaId ();

    void gravaDisAlu ();
    void gravaDisDep ();
    void gravaUniDep ();


    void gravaTudo ();


    void recuperaAlunos ();
    void recuperaUniversidades ();
    void recuperaDepartamentos ();
    void recuperaDisciplinas ();
    void recuperaId ();

    void recuperaTudo ();

    Disciplina* retornaDisId (int id);
    Departamento* retornaDepId (int id);
    Universidade* retornaUniId (int id);
    Aluno* retornaAluId (int id);

    void associaDisAlu ();
    void associaDisDep ();
    void associaUniDep ();




};

#endif //SISTEMA_ACADEMICO_PRINCIPAL_H
