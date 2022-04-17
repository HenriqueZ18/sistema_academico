//
// Created by henrique on 17/04/22.
//

#ifndef SISTEMA_ACADEMICO_LISTADISCIPLINA_H
#define SISTEMA_ACADEMICO_LISTADISCIPLINA_H

#include "Disciplina.h"
#include "ElDisciplina.h"
#include <cstring>

class ListaDisciplina {

private:
    char nome [150];

    ElDisciplina* first;
    ElDisciplina* cur;

public:

    ListaDisciplina(char* n = "");
    ~ListaDisciplina();

    void addDisciplina (Disciplina* pd);
    void imprimeLista ();
};


#endif //SISTEMA_ACADEMICO_LISTADISCIPLINA_H
