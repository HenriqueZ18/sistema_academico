//
// Created by Henrique on 16/04/2022.
//

#include "Professor.h"

Professor:: Professor (int diaNa, int mesNa, int anoNa, char* nome) : Pessoa (diaNa, mesNa, anoNa, nome)
{
   pUnivFiliado = NULL;
   pDepFiliado = NULL;
}

Professor:: Professor (): Pessoa (){
    pUnivFiliado = NULL;
    pDepFiliado = NULL;
}

Professor :: ~Professor (){
    pUnivFiliado = NULL;
    pDepFiliado = NULL;
}

void Professor::setUnivFiliado(Universidade *pu) {
    pUnivFiliado = pu;
}

void Professor::setDepFiliado(Departamento *pd) {
    pDepFiliado = pd;
}

void Professor::OndeTrabalho() {

    cout << nomeP << " trabalha para " << pUnivFiliado->getNome() << " no " << pDepFiliado->getNome() << endl;
}

void Professor:: DepOndeTrabalho() {

    cout << nomeP << " trabalha no " << pDepFiliado->getNome() << endl;
}


