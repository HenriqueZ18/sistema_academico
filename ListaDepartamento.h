//
// Created by henrique on 17/04/22.
//

#ifndef SISTEMA_ACADEMICO_LISTADEPARTAMENTO_H
#define SISTEMA_ACADEMICO_LISTADEPARTAMENTO_H

#include "ElDepartamento.h"
#include <cstring>


class ListaDepartamento {

private:
    char nome [150];

    ElDepartamento* first;
    ElDepartamento* cur;     //current (atual)

public:

    ListaDepartamento(char * n = "");
    ~ListaDepartamento();

    void addDepartamento (Departamento* pd);
    void imprimeLista ();

};


#endif //SISTEMA_ACADEMICO_LISTADEPARTAMENTO_H
