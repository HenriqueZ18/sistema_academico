//
// Created by henrique on 17/04/22.
//

#ifndef SISTEMA_ACADEMICO_ELDEPARTAMENTO_H
#define SISTEMA_ACADEMICO_ELDEPARTAMENTO_H

#include "Departamento.h"


class ElDepartamento {

private:
    Departamento* dep;
    ElDepartamento* next;
    ElDepartamento* prev;

public:

    ElDepartamento();
    ~ElDepartamento();

    void setDepartamento (Departamento* pdep);
    Departamento* getDepartamento ();

    void setNext (ElDepartamento* pn);
    void setPrev (ElDepartamento* pp);

    ElDepartamento* getNext ();
    ElDepartamento* getPrev ();

};


#endif //SISTEMA_ACADEMICO_ELDEPARTAMENTO_H
