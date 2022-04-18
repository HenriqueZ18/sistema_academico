//
// Created by Henrique on 16/04/2022.
//

#include "Aluno.h"

Aluno:: Aluno (int diaNa, int mesNa, int anoNa, char* nome) : Pessoa (diaNa, mesNa, anoNa, nome)
{
   RA = 0;
}

Aluno:: Aluno (int i) : Pessoa()
{
    RA = i;
}

Aluno:: ~Aluno (){
    RA = 0;
}

void Aluno ::setRA(int n) {
    RA = n;
}

int Aluno :: getRA () {
    return RA;
}

void Aluno :: setId (int n){
    id = n;
}

int Aluno ::getId() {
    return id;
}


