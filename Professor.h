//
// Created by Henrique on 16/04/2022.
//

#ifndef SISTEMA_ACADEMICO_PROFESSOR_H
#define SISTEMA_ACADEMICO_PROFESSOR_H
#include "Pessoa.h"
#include "Departamento.h"
#include "Universidade.h"

class Professor : public Pessoa {

private:

    Universidade* pUnivFiliado;
    Departamento* pDepFiliado;

public:
    Professor (int diaNa, int mesNa, int anoNa, char* nome = "");
    Professor ();
    ~Professor ();

    void setUnivFiliado (Universidade* pu);
    void setDepFiliado (Departamento *pd);

    void OndeTrabalho ();
    void DepOndeTrabalho ();

};

#endif //SISTEMA_ACADEMICO_PROFESSOR_H
