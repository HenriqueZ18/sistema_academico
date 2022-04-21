//
// Created by henrique on 21/04/22.
//

#ifndef SISTEMA_ACADEMICO_LISTA_H
#define SISTEMA_ACADEMICO_LISTA_H
#include "Elemento.h"
#include <iostream>
using namespace std;

template<class Type>
class Lista {

private:
    Elemento<Type>* first;
    Elemento<Type>* current;

public:

    Lista();
    ~Lista();
    void inicializa();

    bool addElemento (Elemento<Type>* el);
    bool addInfo (Type* info, string s = "");

    void listaElementos ();

};

template<class Type>
Lista<Type> :: Lista (){
    inicializa();
}

template<class Type>
Lista<Type> :: ~Lista(){

    Elemento<Type>* aux1, aux2;

    aux1 = first;
    aux2 = aux1;

    while (aux1 != NULL){
        aux2 = aux1->getNext();
        delete aux1;
        aux1 = aux2;
    }

}

template<class Type>
void Lista<Type> ::inicializa() {
    first = NULL;
    current = NULL;
}

template<class Type>
bool Lista<Type> ::addElemento(Elemento<Type> *el) {

    if (el != NULL){

        if (first == NULL){
            first = el;
            current = el;
        }
        else{
            el->setPrev(current);
            current->setNext(el);
            current = el;
        }
        return true;
    }
    else{

        cerr << "ERRO: elemento nulo na lista." << endl;
        return false;
    }
}

template<class Type>
bool Lista<Type> ::addInfo(Type *info, string s) {

    if (info != NULL){
        Elemento<Type>* el = NULL;
        el = new Elemento<Type>();
        el->setNome(s);
        el->setCur(info);
        addElemento(el);
        return true;
    }
    else{
        cerr << "ERRO: informação fornecida é nula." << endl;
        return false;
    }
}

template<class Type>
void Lista<Type>::listaElementos() {

    Elemento<Type>* aux;
    aux = first;

    while (aux != NULL){
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

#endif //SISTEMA_ACADEMICO_LISTA_H
