//
// Created by Henrique on 14/03/2022.
//

#include "Pessoa.h"

void Pessoa::Inicializa (int diaNa, int mesNa, int anoNa, char *nome) {

    diaP = diaNa;
    mesP= mesNa;
    anoP = anoNa;
    strcpy (nomeP, nome);

}

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa, char *nome){

    Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa (){

    Inicializa (0,0,0);
}

void Pessoa:: Calc_idade (int diaAt, int mesAt, int anoAt) {

    if (mesAt <= mesP)
    {
        if (mesAt == mesP)
        {
            if (diaAt >= diaP)
            {
                idadeP = (anoAt - anoP);
            }
            else
            {
                idadeP = (anoAt - anoP - 1);
            }
        }

        else
        {
            idadeP = (anoAt - anoP - 1);
        }
    }
    else {
        idadeP = (anoAt - anoP);
    }
}

void Pessoa::Imprime_idade() {

    cout << "A idade de " << nomeP << " eh: " << idadeP << endl;
}

void Pessoa::Calc_imprime_idade(int diaAt, int mesAt, int anoAt) {

    Calc_idade(diaAt, mesAt, anoAt);
    Imprime_idade();
}

char* Pessoa ::getNome() {

    return nomeP;
}

Pessoa:: ~Pessoa (){

}






