//
// Created by Henrique on 14/03/2022.
//

#include "Principal.h"

using namespace std;

Principal:: Principal ()
{
    dia = 0;
    mes = 0;
    ano = 0;
    qtdDep = 0;
    qtdDis = 0;
    qtdUni = 0;

    Execute ();
}

Principal:: ~Principal (){}

void Principal:: Execute ()
{
    menu ();
}

void Principal :: menu (){

    int op = -1;

    while (op != 3){
        //Comando para limpar o terminal do linux.
        system ("clear");
        //system("cls");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Realizar um cadastro" << endl;
        cout << "2- Executar" << endl;
        cout << "3- Sair" << endl;
        cin >> op;

        switch (op){

            case 1: {menuCad();}
            break;
            case 2: {menuExe();}
            break;
            case 3: {cout << "TERMINANDO O PROGRAMA" << endl;}
            break;
            default : {cout << "Opção inválida" << endl;
                system ("Pause");
            }
        }
    }
}

void Principal :: menuCad (){

    int op = -1;

    while (op != 4){

        system ("clear");
        //system("cls");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Cadastrar Disciplina" << endl;
        cout << "2- Cadastrar Departamento" << endl;
        cout << "3- Cadastrar Universidade" << endl;
        cout << "4- Sair" << endl;
        cin >> op;

        switch (op){

            case 1 : {cadDisciplina();}
            break;
            case 2 : {cadDepartamento();}
            break;
            case 3: {cadUniversidade();}
            break;
            case 4 : {cout << "SAINDO..." << endl;}
            break;
            default : {
                cout << "Opção Inválida" << endl;
                getchar();
            }
        }
    }

}

void Principal :: menuExe (){

    int op = -1;

    while (op != 4){

        system ("clear");
        //system("cls");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Listar Disciplinas" << endl;
        cout << "2- listar Departamentos" << endl;
        cout << "3- Listar Universidade" << endl;
        cout << "4- Sair" << endl;
        cin >> op;

        switch (op){

            case 1: {
                imprimeDisciplinas();
                fflush(stdin);
                getchar();
                getchar();
            } break;
            case 2: {
                imprimeDepartamentos();
                fflush (stdin);
                getchar ();
                getchar();
            } break;
            case 3: {
                imprimeUniversidades();
                fflush (stdin);
                getchar();
                getchar();
            } break;
            case 4: {cout << "SAINDO..." << endl;}
            break;
            default: {
                cout <<"Opção Inválida!" << endl;
                getchar ();
                getchar();
            }
        }
    }
}

void Principal ::imprimeDisciplinas() {

    list<Disciplina*>::iterator i;

    for (i = lDis.begin(); i != lDis.end(); i++)
        cout << (*i)->getNome() << endl;

}

void Principal ::imprimeDepartamentos() {

    list<Departamento*>::iterator i;

    for (i = lDep.begin(); i != lDep.end(); i++)
        cout << (*i)->getNome() << endl;

}

void Principal ::imprimeUniversidades() {

    list<Universidade*>::iterator i;

    for (i = lUni.begin(); i != lUni.end(); i++)
        cout << (*i)->getNome() << endl;

}

void Principal :: cadDisciplina (){

    system("clear");
    //system("cls");

    Disciplina* aux;

    aux = new Disciplina();

    cout << "Insira o nome da disciplina:" << endl;
    cin >> aux->getNome();

    lDis.push_back(aux);
}

void Principal :: cadDepartamento() {

    system("clear");
    //system("cls");

    Departamento* aux;
    Universidade* u = NULL;

    aux = new Departamento ();

    char nome_uni [10];

    cout << "Insira o nome do Departamento:" << endl;
    cin >> aux->getNome();

    cout <<"Insira o nome da Universidade a que pertence o departamento " << endl;
    cin >> nome_uni;

    u = localizaUniversidade (nome_uni);

    if (u == NULL){
        cout <<"A Universidade não foi encontrada" << endl;
    }
    else{
        u->setDepartamento(aux);
        aux->setUnivFiliado(u);

        cout << "O departamento " << aux->getNome() << " foi associado com sucesso à Universidade "
        << u->getNome() << endl;
    }


    lDep.push_back(aux);

}

void Principal :: cadUniversidade() {

    system("clear");
    //system("cls");
    Universidade* aux;

    aux = new Universidade();

    cout << "Insira o nome da Universidade:" << endl;
    cin >> aux->getNome();


    lUni.push_back(aux);
}

Universidade* Principal ::localizaUniversidade(char *n) {

    list<Universidade*>::iterator i;

    Universidade* uni = NULL;

    int flag = 0;

    for (i = lUni.begin(); i != lUni.end(); i++){
        if (strcmp((*i)->getNome(), n) == 0){
            uni = *i;
        }
    }

    return uni;



}


