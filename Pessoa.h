//
// Created by Henrique on 14/03/2022.
//

#ifndef SISTEMA_ACADEMICO_PESSOA_H
#define SISTEMA_ACADEMICO_PESSOA_H

#include "Universidade.h"
#include "Departamento.h"


class Pessoa
{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP [40];

public:

    Pessoa (int diaNa, int mesNa, int anoNa, char* nome = "");

    Pessoa ();

    ~Pessoa ();

    void Inicializa (int diaNa, int mesNa, int anoNa, char* nome = "");

    void Calc_idade (int diaAt, int mesAt, int anoAt);

    void Imprime_idade ();

    void Calc_imprime_idade (int diaAt, int mesAt, int anoAt);

    char* getNome ();




};

#endif //SISTEMA_ACADEMICO_PESSOA_H
