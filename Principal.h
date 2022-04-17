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

    Professor Simao;
    Aluno Zequinha;
    Aluno Greg;
    Aluno Ronilson;

    Universidade UTFPR;

    Departamento DAINF;
    Departamento DAELN;
    Departamento DAFIS;
    Departamento DAMAT;

    Disciplina FProg;
    Disciplina ED1;
    Disciplina TecProg;

    int diaAtual;
    int mesAtual;
    int anoAtual;

public:
    Principal ();
    ~Principal();
    void Execute ();
};

#endif //SISTEMA_ACADEMICO_PRINCIPAL_H
