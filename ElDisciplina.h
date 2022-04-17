//
// Created by henrique on 17/04/22.
//

#ifndef SISTEMA_ACADEMICO_ELDISCIPLINA_H
#define SISTEMA_ACADEMICO_ELDISCIPLINA_H
#include "Disciplina.h"


class ElDisciplina {

private:
    Disciplina* di;
    ElDisciplina* next;
    ElDisciplina* prev;

public:
    ElDisciplina();
    ~ElDisciplina();

    void setDisciplina (Disciplina* pd);
    Disciplina* getDisciplina ();

    void setNext (ElDisciplina* pn);
    void setPrev (ElDisciplina* pp);

    ElDisciplina* getNext ();
    ElDisciplina* getPrev ();


};


#endif //SISTEMA_ACADEMICO_ELDISCIPLINA_H
