//
// Created by Henrique on 16/04/2022.
//

#ifndef SISTEMA_ACADEMICO_DISCIPLINA_H
#define SISTEMA_ACADEMICO_DISCIPLINA_H

#include <iostream>
#include <cstring>
#include <list>
#include"Departamento.h"
#include "ListaAluno.h"

//#include "Aluno.h"
//#include "ElAluno.h"


using namespace std;

class Disciplina {

private:
    char nome [130];
    int max;
    int alunos;
    int id;

    Departamento* pDepFiliado;
    list<Aluno*> lalunos;

    //ElAluno* first;
    //ElAluno* cur;



public:
    Disciplina (char* n = "", int maxF= 45, int alunosF = 0);
    ~Disciplina ();

    void setNome (char* n);
    char* getNome ();

    void setDepFiliado (Departamento *p);
    Departamento* getDepFiliado ();

    void addAluno (Aluno* a);
    void delAluno (Aluno* a);
    void imprimeAlunos ();

    void setId (int n);
    int getId ();

    //void incluiAluno (Aluno* a);

};


#endif //SISTEMA_ACADEMICO_DISCIPLINA_H
