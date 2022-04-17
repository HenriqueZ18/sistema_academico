//
// Created by henrique on 17/04/22.
//

#include "ElDepartamento.h"

ElDepartamento ::ElDepartamento() {

    dep = NULL;
    next = NULL;
    prev = NULL;
}

ElDepartamento :: ~ElDepartamento() {
    dep = NULL;
    next = NULL;
    prev = NULL;
}

void ElDepartamento ::setDepartamento(Departamento *pdep) {
    dep = pdep;
}

Departamento* ElDepartamento ::getDepartamento() {
    return dep;
}

void ElDepartamento ::setNext(ElDepartamento *pn) {
    next = pn;
}

void ElDepartamento ::setPrev(ElDepartamento *pp) {
    prev = pp;
}

ElDepartamento* ElDepartamento ::getNext() {
    return next;
}

ElDepartamento* ElDepartamento ::getPrev() {
    return prev;
}