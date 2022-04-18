//
// Created by Henrique on 16/04/2022.
//

#ifndef SISTEMA_ACADEMICO_ALUNO_H
#define SISTEMA_ACADEMICO_ALUNO_H
#include "Pessoa.h"
#include "Departamento.h"
#include "Universidade.h"


class Aluno : public Pessoa {

private:

    int RA;
    int id;

public:

    Aluno (int diaNa, int mesNa, int anoNa, char* nome = "");

    ~Aluno ();

    void setRA (int n);
    int getRA ();

    void setId (int n);
    int getId ();
};

#endif //SISTEMA_ACADEMICO_ALUNO_H
