//
// Created by henrique on 17/04/22.
//

#include "ElAluno.h"

ElAluno ::ElAluno() {
    pAl = NULL;
    next = NULL;
    prev = NULL;
}

ElAluno :: ~ElAluno() {
    pAl = NULL;
    next = NULL;
    prev = NULL;
}

void ElAluno :: setAluno (Aluno* pa){
    pAl = pa;
}

Aluno* ElAluno :: getAluno() {
    return pAl;
}

void ElAluno :: setNext (ElAluno* pn){
    next = pn;
}

void ElAluno :: setPrev (ElAluno* pp){
    prev = pp;
}

ElAluno* ElAluno ::getNext() {
    return next;
}

ElAluno* ElAluno ::getPrev() {
    return prev;
}