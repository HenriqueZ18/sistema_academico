//
// Created by henrique on 21/04/22.
//

#ifndef SISTEMA_ACADEMICO_ELEMENTO_H
#define SISTEMA_ACADEMICO_ELEMENTO_H
#include<string>

using namespace std;

template<class Type>
class Elemento {

private:
    Elemento<Type>* next;
    Elemento<Type>* prev;
    Type*   current;
    string nome;

public:

    Elemento();
    ~Elemento();

    void setNext (Elemento<Type>* n);
    Elemento<Type>* getNext ();

    void setPrev (Elemento<Type>* p);
    Elemento<Type>* getPrev ();

    void setCur (Elemento<Type>* c);
    Elemento<Type>* getCur ();

    void setNome (string s);
    string getNome ();


};

template<class Type>
Elemento<Type> ::Elemento() {
    current = NULL;
    next = NULL;
    prev = NULL;
    nome = "";
}

template<class Type>
void Elemento<Type> ::setNext(Elemento<Type> *n) {
    next = n;
}

template<class Type>
Elemento<Type>* Elemento<Type> ::getNext() {
    return next;
}

template<class Type>
void Elemento<Type> ::setPrev(Elemento<Type> *p) {
    prev = p;
}

template<class Type>
Elemento<Type>* Elemento<Type> ::getPrev() {
    return prev;
}

template<class Type>
void Elemento<Type> ::setCur(Elemento<Type> *c) {
    current = c;
}

template<class Type>
Elemento<Type>* Elemento<Type> ::getCur() {
    return current;
}

template<class Type>
void Elemento<Type> ::setNome(string s) {
    nome = s;
}

template<class Type>
string Elemento<Type> ::getNome() {
    return nome;
}






#endif //SISTEMA_ACADEMICO_ELEMENTO_H
