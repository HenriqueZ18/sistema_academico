//
// Created by Henrique on 14/03/2022.
//

#ifndef SISTEMA_ACADEMICO_UNIVERSIDADE_H
#define SISTEMA_ACADEMICO_UNIVERSIDADE_H


#include <iostream>
#include <cstring>
#include <vector>
#include <list>
#include "Departamento.h"

using namespace std;

class Universidade {

private:

    char nome [100];
    vector <Departamento*> Vdep ;
    //list <Departamaento*> Ldep;
    int deps = 0;


public:

    Universidade (char* n = "");

    ~Universidade();

    void setNome (char *n);
    char* getNome ();

    void setDepartamento (Departamento* dpto);

    void imprimeDepartamentos ();

    //void setNomeDep (char* nome_dep);

//   void setSigla (char* s);
//    char* getSigla ();
};

#endif //SISTEMA_ACADEMICO_UNIVERSIDADE_H