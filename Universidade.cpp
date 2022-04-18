//
// Created by Henrique on 14/03/2022.
//
#include "Universidade.h"

Universidade::Universidade(char *n) {

    strcpy(nome, n);
    deps = 0;
    id = -1;

}

Universidade:: ~Universidade() {

    Ldep.clear();
}

void Universidade:: setNome (char* n)
{
    strcpy (nome, n);
}
char* Universidade::getNome() {

    return nome;
}

void Universidade ::setDepartamento(Departamento* dpto) {

 //Vdep.push_back(dpto);
 Ldep.push_back(dpto);

 deps++;
}

void Universidade :: imprimeDepartamentos() {

    int j = 0;

    list<Departamento*>::iterator i;

    for (i = Ldep.begin(); i != Ldep.end(); i++){
        cout << (*i)->getNome() << " id: " << j << endl;
        j++;
    }
}

void Universidade ::setId(int n) {
    id = n;
}

int Universidade ::getId() {
    return id;
}







/*void Universidade::imprimeDepartamentos() {

    int j;
    list <Departamento*>::iterator i;

    for (i = Ldep.begin(), j =0; i != Ldep.end(); i++, j++)
    {
        cout << (*i)->getNome() << " id: " << j << endl;
    }



}
*/

/*void Universidade ::setNomeDep(char *nome_dep) {

    Dep.setNome(nome_dep);
}
*/

/*void Universidade:: setSigla (char* s)
{
    strcpy (sigla, s);
}
char* Universidade::getSigla() {

    return sigla;
}
*/
