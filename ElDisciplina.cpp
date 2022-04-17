//
// Created by henrique on 17/04/22.
//

#include "ElDisciplina.h"

ElDisciplina ::ElDisciplina() {
    di = NULL;
    next = NULL;
    prev = NULL;
}

ElDisciplina :: ~ElDisciplina() {}

void ElDisciplina ::setDisciplina(Disciplina *pd) {
    di = pd;
}

Disciplina* ElDisciplina ::getDisciplina() {
    return di;
}

void ElDisciplina :: setNext (ElDisciplina *pn) {
    next = pn;
}

void ElDisciplina ::setPrev(ElDisciplina *pp) {
    prev = pp;
}

ElDisciplina* ElDisciplina ::getNext() {
    return next;
}

ElDisciplina* ElDisciplina ::getPrev() {
    return prev;
}