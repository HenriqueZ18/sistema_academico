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

    idDep = 0;
    idDis = 0;
    idUni = 0;
    idAlu = 0;

    Execute ();
}

Principal:: ~Principal (){

    lUni.clear();
    lDep.clear();
    lDis.clear();
}

void Principal:: Execute ()
{
    menu ();
}

/*=================================MENUS==================================*/

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

    while (op != 5){

        system ("clear");
        //system("cls");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Cadastrar Disciplina" << endl;
        cout << "2- Cadastrar Departamento" << endl;
        cout << "3- Cadastrar Universidade" << endl;
        cout << "4- Cadastrar Aluno" << endl;
        cout << "5- Sair" << endl;
        cin >> op;

        switch (op){

            case 1 : {cadDisciplina();}
            break;
            case 2 : {cadDepartamento();}
            break;
            case 3: {cadUniversidade();}
            break;
            case 4: {cadAluno();}
            break;
            case 5 : {cout << "SAINDO..." << endl;}
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

/*========================IMPRESSÃO=======================*/


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

/*=================================CADASTRO==================================*/


void Principal :: cadDisciplina (){

    system("clear");
    //system("cls");

    Disciplina* aux;
    Departamento* d = NULL;

    aux = new Disciplina();

    char nome_dep [10];

    cout << "Insira o nome da disciplina:" << endl;
    cin >> aux->getNome();

    cout <<"Insira o nome da Departamento a que pertence a disciplina " << endl;
    cin >> nome_dep;

    d = localizaDepartamento(nome_dep);

    if (d == NULL){
        cout << "O Departamento não foi localizado." << endl;
    }
    else {
        aux->setDepFiliado(d);

        cout << "A disciplina " << aux->getNome() << " foi associada com sucesso ao departamento "
        << d->getNome() << endl;
    }

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

void Principal :: cadAluno() {

    system ("clear");

    Aluno* aux;
    Disciplina* dis = NULL;
    char nomeA [150];
    char nomeDis [150];
    int RA;
    int flag = 0;

    cout <<"Insira o nome do Aluno:" << endl;
    cin >> nomeA;

    aux = new Aluno(0,0,0, nomeA);

    aux->setId(idAlu);
    idAlu++;

    cout << "Insira o RA do Aluno. " << endl;
    cin >> RA;

    aux->setRA(RA);

    cout <<"Você gostaria de cadastrar o aluno em alguma disciplina?\n1- Sim\n2- Não" << endl;
    cin >> flag;

    while (flag == 1){
        cout << "DISCIPLINAS CADASTRADAS" << endl;
        imprimeDisciplinas();

        cout << "Insira o nome da Disciplina" << endl;
        cin >> nomeDis;

        dis = localizaDisciplina(nomeDis);

        if (dis == NULL){
            cout << "Não foi possível localizar a Disciplina." << endl;
        }
        else {
            dis->addAluno(aux);

            cout << "O aluno " << aux->getNome() << " foi incluído com Sucesso à disciplina "
            << dis->getNome() << endl;
        }

        cout << "Gostaria de cadastrar o Aluno em mais alguma Disciplina?\n1- Sim\n"
                "2- Não" << endl;
        cin >> flag;

    }


    lAlu.push_back(aux);

}

/*=================================LOCALIZA==================================*/

Universidade* Principal ::localizaUniversidade(char *n) {

    list<Universidade*>::iterator i;

    Universidade* uni = NULL;

    for (i = lUni.begin(); i != lUni.end(); i++){
        if (strcmp((*i)->getNome(), n) == 0){
            uni = *i;
        }
    }

    return uni;

}

Departamento* Principal ::localizaDepartamento(char *n) {

    list<Departamento*>::iterator i;

    Departamento* dep = NULL;

    for (i = lDep.begin(); i != lDep.end() && dep == NULL; i++){
        if (strcmp((*i)->getNome(), n)== 0){
            dep = *i;
        }
    }

    return dep;
}

Disciplina* Principal :: localizaDisciplina (char *n){
    list<Disciplina*>::iterator i;

    Disciplina* dis = NULL;

    for (i = lDis.begin(); i != lDis.end() && dis == NULL; i++){
        if(strcmp((*i)->getNome(), n)== 0){
            dis = *i;
        }
    }

    return dis;
}

