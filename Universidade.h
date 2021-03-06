//
// Created by Henrique on 14/03/2022.
//

#ifndef SISTEMA_ACADEMICO_UNIVERSIDADE_H
#define SISTEMA_ACADEMICO_UNIVERSIDADE_H


#include <iostream>
#include <cstring>
#include <vector>
#include <list>
#include "ListaDepartamento.h"

using namespace std;

class Universidade {

private:

    char nome [100];
    //vector<Departamento*> Vdep ;
    list <Departamento*> Ldep;
    int deps;
    int id;


public:

    Universidade (char* n = "");

    ~Universidade();

    void setNome (char *n);
    char* getNome ();

    void setDepartamento (Departamento* dpto);

    void imprimeDepartamentos ();

    void setId (int n);
    int getId ();

    list<Departamento*> getLista ();

    //void setNomeDep (char* nome_dep);

//   void setSigla (char* s);
//    char* getSigla ();
};

#endif //SISTEMA_ACADEMICO_UNIVERSIDADE_H