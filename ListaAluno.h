//
// Created by henrique on 17/04/22.
//

#ifndef SISTEMA_ACADEMICO_LISTAALUNO_H
#define SISTEMA_ACADEMICO_LISTAALUNO_H
#include "Aluno.h"
#include "ElAluno.h"
#include <cstring>

class ListaAluno {

private:
    int alunos;
    int max;
    char nome [150];

    ElAluno* first;
    ElAluno* cur;           //current (atual)

public:
    ListaAluno(int maxf = 45, char * n = "");
    ~ListaAluno ();

    void addAluno (Aluno* pa);
    void imprimeLista ();
};


#endif //SISTEMA_ACADEMICO_LISTAALUNO_H
