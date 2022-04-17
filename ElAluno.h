//
// Created by henrique on 17/04/22.
//

#ifndef SISTEMA_ACADEMICO_ELALUNO_H
#define SISTEMA_ACADEMICO_ELALUNO_H
#include "Aluno.h"

class ElAluno {

private:
    Aluno* pAl;
    ElAluno* next;
    ElAluno* prev;

public:
    ElAluno();
    ~ElAluno();

    void setAluno (Aluno* pa);
    Aluno* getAluno ();

    void setNext (ElAluno* pn);
    void setPrev (ElAluno* pp);

    ElAluno* getNext ();
    ElAluno* getPrev ();

};


#endif //SISTEMA_ACADEMICO_ELALUNO_H
