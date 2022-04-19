//
// Created by Henrique on 14/03/2022.
//

#include "Principal.h"
#include <iostream>
#include <fstream>

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

    while (op != 5){
        //Comando para limpar o terminal do linux.
        system ("clear");
        //system("cls");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Realizar um cadastro" << endl;
        cout << "2- Executar" << endl;
        cout << "3- Gravar" << endl;
        cout << "4- Recuperar" << endl;
        cout << "5- Sair" << endl;
        cin >> op;

        switch (op){

            case 1: {menuCad();}
            break;
            case 2: {menuExe();}
            break;
            case 3: {menuGrava();}
            break;
            case 4: {menuRecupera();}
                break;
            case 5: {cout << "TERMINANDO O PROGRAMA" << endl;}
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

    while (op != 5){

        system ("clear");
        //system("cls");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Listar Disciplinas" << endl;
        cout << "2- listar Departamentos" << endl;
        cout << "3- Listar Universidade" << endl;
        cout << "4- Listar Alunos" << endl;
        cout << "5- Sair" << endl;
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
            case 4: {
                imprimeAlunos();
                fflush(stdin);
                getchar();
                getchar();
            } break;
            case 5: {cout << "SAINDO..." << endl;}
            break;
            default: {
                cout <<"Opção Inválida!" << endl;
                getchar ();
                getchar();
            }
        }
    }
}

void Principal :: menuGrava (){

    int op = -1;

    while (op != 7){

        system ("clear");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Gravar Disciplinas" << endl;
        cout << "2- Gravar Departamentos" << endl;
        cout << "3- Gravar Universidade" << endl;
        cout << "4- Gravar Alunos" << endl;
        cout << "5- Gravar Ids" << endl;
        cout << "6- Gravar Todos" << endl;
        cout << "7- Sair" << endl;
        cin >> op;

        switch (op){
            case 1 : {gravaDisciplinas();}
                break;
            case 2 : {gravaDepartamentos();}
                break;
            case 3: {gravaUniversidades();}
                break;
            case 4: {gravaAlunos();}
                break;
            case 5: {gravaId();}
                break;
            case 6: {gravaTudo();}
                break;
            case 7 : {cout << "SAINDO..." << endl;}
                break;
            default : {
                cout << "Opção Inválida" << endl;
                getchar();
            }


        }


    }
}

void Principal ::menuRecupera() {

    int op = -1;

    while (op != 7){
        system ("clear");

        cout << "Informe a opção desejada: " << endl;
        cout << "1- Recuperar Disciplinas" << endl;
        cout << "2- Recuperar Departamentos" << endl;
        cout << "3- Recuperar Universidade" << endl;
        cout << "4- Recuperar Alunos" << endl;
        cout << "5- Recuperar Ids" << endl;
        cout << "6- Recuperar Todos" << endl;
        cout << "7- Sair" << endl;
        cin >> op;

        switch (op){
            case 1 : {recuperaDisciplinas();}
                break;
            case 2 : {recuperaDepartamentos();}
                break;
            case 3: {recuperaUniversidades();}
                break;
            case 4: {recuperaAlunos();}
                break;
            case 5: {recuperaId();}
                break;
            case 6: {recuperaTudo();}
                break;
            case 7 : {cout << "SAINDO..." << endl;}
                break;
            default : {
                cout << "Opção Inválida" << endl;
                getchar();
            }
        }


    }
}

/*========================IMPRESSÃO=======================*/


void Principal ::imprimeDisciplinas() {

    list<Disciplina*>::iterator i;

    for (i = lDis.begin(); i != lDis.end(); i++){
        cout << (*i)->getNome() << endl;
        cout << endl;
        (*i)->imprimeAlunos();
        cout << "=====================================" << endl;
    }


}

void Principal ::imprimeDepartamentos() {

    list<Departamento*>::iterator i;

    for (i = lDep.begin(); i != lDep.end(); i++){
        cout << (*i)->getNome() << endl;
        cout << endl;
        (*i)->imprimeDisciplinas();
        cout << "================================" << endl;
    }


}

void Principal ::imprimeUniversidades() {

    list<Universidade*>::iterator i;

    for (i = lUni.begin(); i != lUni.end(); i++){
        cout << (*i)->getNome() << endl;
        cout << endl;
        (*i)->imprimeDepartamentos();
        cout << "================================" << endl;
    }


}

void Principal ::imprimeAlunos() {

    list<Aluno*>::iterator i;

    for (i = lAlu.begin(); i != lAlu.end(); i++)
        cout << (*i)->getNome() << " " <<(*i)->getId() << " " << (*i)->getRA() << endl;
        cout << "\n" << endl;
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

    aux->setId(idDis);
    idDis++;

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

    aux->setId(idDep);
    idDep++;


    lDep.push_back(aux);

}

void Principal :: cadUniversidade() {

    system("clear");
    //system("cls");
    Universidade* aux;

    aux = new Universidade();

    cout << "Insira o nome da Universidade:" << endl;
    cin >> aux->getNome();

    aux->setId(idUni);
    idUni++;


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

/*=================================GRAVA==================================*/
void Principal ::gravaAlunos() {
    ofstream gravadorAlunos ("alunos.dat", ios::out);

    if (!gravadorAlunos){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    list<Aluno*>::iterator i;

    cout << "Gravando Alunos..." << endl;
    for (i = lAlu.begin(); i != lAlu.end(); i++){

        gravadorAlunos << (*i)->getId() << endl;
        gravadorAlunos << (*i)->getRA() << endl;
        gravadorAlunos << (*i)->getNome() << endl;

    }
    gravadorAlunos.close();
    cout << "Alunos gravados com sucesso."<< endl;
}

void Principal ::gravaUniversidades() {

    ofstream gravadorUniversidades ("universidades.dat", ios::out);

    if (!gravadorUniversidades){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    list<Universidade*>::iterator i;

    cout << "Gravando universidades..." << endl;
    for(i = lUni.begin(); i != lUni.end(); i++){
        gravadorUniversidades << (*i)->getNome() << endl;
        gravadorUniversidades << (*i)->getId() << endl;
    }

    gravadorUniversidades.close();
    cout << "Universidades gravadas com sucesso." << endl;
}

void Principal ::gravaDepartamentos() {

    ofstream gravadorDepartamentos ("departamentos.dat", ios::out);

    if (!gravadorDepartamentos){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    list<Departamento*>::iterator i;

    cout << "gravando Departamentos..." << endl;
    for (i= lDep.begin(); i != lDep.end(); i++){
        gravadorDepartamentos << (*i)->getId() << endl;
        gravadorDepartamentos << (*i)->getNome() << endl;
    }

    gravadorDepartamentos.close();
    cout << "Departamentos gravados com sucesso." << endl;
}

void Principal ::gravaDisciplinas() {

    ofstream gravadorDisciplinas ("disciplinas.dat", ios::out);

    if (!gravadorDisciplinas){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    list<Disciplina*>::iterator i;

    cout << "gravando Disciplinas..." << endl;
    for (i = lDis.begin(); i != lDis.end(); i++){
        gravadorDisciplinas << (*i)->getId() << endl;
        gravadorDisciplinas << (*i)->getNome() <<  endl;
        gravadorDisciplinas << (*i)->getMax() << endl;
    }

    gravadorDisciplinas.close();

    cout << "Disciplinas gravadas com sucesso." << endl;
}

void Principal :: gravaId (){

    ofstream gravadorId ("id.dat", ios::out);

    if (!gravadorId){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }


    cout << "gravando ids..." << endl;

        gravadorId << idAlu << endl;
        gravadorId << idDep << endl;
        gravadorId << idDis << endl;
        gravadorId << idUni << endl;


    gravadorId.close();

    cout << "ids gravadas com sucesso" << endl;
}

void Principal ::gravaDisAlu() {

    ofstream gravadorDisAlu ("ada.dat", ios::out);

    if (!gravadorDisAlu){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    list<Disciplina*>::iterator i;
    list<Aluno*>::iterator j;

    list<Aluno*> aux;

    for(i = lDis.begin(); i != lDis.end(); i++){
        gravadorDisAlu << (*i)->getId() << endl;
        aux = (*i)->getListaAluno();

        gravadorDisAlu << aux.size() << endl;

        for (j = aux.begin(); j != aux.end(); j++){
            gravadorDisAlu << (*j)->getId() << endl;
        }
    }

    gravadorDisAlu.close();

    cout << "As relações aluno disciplina foram gravadas com sucesso." << endl;
}

void Principal ::gravaDisDep() {

    ofstream gravadorDisDep ("add.dat", ios::out);

    if(!gravadorDisDep){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    list<Departamento*>::iterator i;
    list<Disciplina*>::iterator j;

    list<Disciplina*> aux;

    for (i = lDep.begin(); i != lDep.end(); i++){

        gravadorDisDep << (*i)->getId() << endl;
        aux = (*i)->getLista();

        gravadorDisDep << aux.size() << endl;

        for (j = aux.begin(); j != aux.end(); j++){
            gravadorDisDep << (*j)->getId() << endl;
        }
    }

    gravadorDisDep.close();

    cout << "As relações Departamento Disciplina foram guardadas com sucesso" << endl;

}

void Principal :: gravaUniDep (){

    ofstream gravadorUniDep ("aud.dat", ios::out);

    if (!gravadorUniDep){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    list<Universidade*>::iterator i;
    list<Departamento*>::iterator j;

    list<Departamento*> aux;

    for (i = lUni.begin(); i != lUni.end(); i++){

        gravadorUniDep << (*i)->getId() << endl;
        aux = (*i)->getLista();
        gravadorUniDep << aux.size() << endl;

        for (j = aux.begin(); j != aux.end(); j++){
            gravadorUniDep << (*j)->getId() << endl;
        }

    }
    gravadorUniDep.close();

    cout << "As relações Departamento Disciplina foram guardadas com sucesso" << endl;
}



void Principal ::gravaTudo() {
         gravaAlunos ();
         gravaUniversidades ();
         gravaDepartamentos ();
         gravaDisciplinas ();
         gravaId();

         gravaDisAlu();
         gravaDisDep();
         gravaUniDep();
}
/*=================================RECUPERA==================================*/

void Principal ::recuperaAlunos() {

    ifstream recuperadorAlunos ("alunos.dat", ios::in);

    if (!recuperadorAlunos){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }
    lAlu.clear();

    Aluno* novo_al = NULL;
    int id, RA;
    char nome_al [150];

    cout << "Recuperando alunos..." << endl;
    while(recuperadorAlunos >> id >> RA >> nome_al){

        if(strcmp(nome_al, "") != 0){
            novo_al = new Aluno(0,0,0,nome_al);
            novo_al->setId(id);
            novo_al->setRA(RA);

            lAlu.push_back(novo_al);
        }
    }

    recuperadorAlunos.close();
    cout << "Alunos recuperados com sucesso." << endl;
}

void Principal ::recuperaUniversidades() {

    ifstream recuperadorUniversidades ("universidades.dat", ios::in);

    if (!recuperadorUniversidades){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }
    lUni.clear();

    Universidade* nova_uni = NULL;
    char nome [150];
    int idu;

    cout << "Recuperando universidades..." << endl;
    while (recuperadorUniversidades >> nome >> idu){
        if(strcmp(nome, "") != 0){
            nova_uni = new Universidade();
            nova_uni->setNome(nome);
            nova_uni->setId(idu);

            lUni.push_back(nova_uni);
        }
    }

    recuperadorUniversidades.close();
    cout << "Universidades recuperadas com sucesso." << endl;

}
void Principal ::recuperaDepartamentos() {

    ifstream recuperaDepartamentos ("departamentos.dat", ios::in);

    if(!recuperaDepartamentos){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }
    lDep.clear();

    Departamento* dep = NULL;
    int id;
    char nome [150];

    cout << "Recuperando departamentos..." << endl;
    while(recuperaDepartamentos >> id >> nome){
        if(strcmp(nome, "") != 0){
            dep = new Departamento(nome);
            dep->setId(id);

            lDep.push_back(dep);
        }

    }

    recuperaDepartamentos.close();
    cout << "Departamentos Recuperados com sucesso." << endl;
}
void Principal ::recuperaDisciplinas() {

    ifstream recuperaDisciplinas ("disciplinas.dat", ios::in);

    if(!recuperaDisciplinas){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }
    lDis.clear();

    Disciplina* dis = NULL;
    int id, max;
    char nome [150];

    cout << "Recuperando disciplinas..." << endl;
    while (recuperaDisciplinas >> id >> nome >> max){
        if (strcmp(nome, "") != 0){
            dis = new Disciplina(nome, max, 0);
            dis->setId(id);

            lDis.push_back(dis);
        }
    }

    recuperaDisciplinas.close();
    cout << "Disciplinas recuperadas com sucesso." << endl;
}
void Principal ::recuperaId() {

    ifstream recuperaId ("id.dat", ios::in);

    if (!recuperaId){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    cout << "Recuperando ids..." << endl;
        recuperaId >> idAlu >> idDep >> idDis >> idUni;

    recuperaId.close();
    cout << "Ids recuperadas com sucesso" << endl;
}

void Principal :: associaDisAlu (){

    ifstream associaDisAlu ("ada.dat", ios::in);

    if(!associaDisAlu){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    int idd, ida, alunos, i;

    Disciplina* pdis;
    Aluno* palu;

    while(associaDisAlu >> idd >> alunos){
        pdis = retornaDisId (idd);
        for(i = 0; i < alunos ; i++){
            associaDisAlu >> ida;
            palu = retornaAluId(ida);
            pdis->addAluno(palu);
        }
    }

    associaDisAlu.close();

    cout << "As Associções Disciplina Aluno foram recuperadas com sucesso." << endl;
}

void Principal :: associaDisDep(){

    ifstream associaDisDep ("add.dat", ios:: in);

    if (!associaDisDep){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    int iddi, idde, disciplinas, i;

    Departamento* pdep;
    Disciplina* pdis;

    while (associaDisDep >> idde >> disciplinas){
        pdep = retornaDepId(idde);
        for (i = 0; i < disciplinas;i++){
            associaDisDep >> iddi;
            pdis = retornaDisId(iddi);
            pdis->setDepFiliado(pdep);
        }
    }

    associaDisDep.close();

    cout  << "As Associções Disciplina Departamento foram recuperadas com sucesso." << endl;

}

void Principal ::associaUniDep() {

    ifstream associaUniDep ("aud.dat", ios::in);

    if (!associaUniDep){
        cerr << "Arquivo não pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    int idu, idde, departamentos, i;

    Universidade* puni;
    Departamento* pdep;

    while (associaUniDep >> idu >> departamentos){
        puni = retornaUniId(idu);
        for (i = 0; i < departamentos; i++){
            associaUniDep >> idde;
            pdep = retornaDepId(idde);
            puni->setDepartamento(pdep);
        }
    }

    associaUniDep.close();

    cout << "As Associções Universidade Departamento foram recuperadas com sucesso." << endl;
}


void Principal ::recuperaTudo() {
    recuperaAlunos ();
    recuperaUniversidades ();
    recuperaDepartamentos ();
    recuperaDisciplinas ();
    recuperaId ();

    associaDisAlu ();
    associaDisDep ();
    associaUniDep ();
}


/*=================================LOCALIZAÇÃO POR ID==================================*/

Disciplina* Principal :: retornaDisId(int id) {

    list<Disciplina *>::iterator i = lDis.begin();

    while ((*i)->getId() != id && i != lDis.end()){
        i++;
    }
    if ((*i)->getId() == id)
        return *i;
    else
        return NULL;
}

Departamento* Principal ::retornaDepId(int id) {

    list<Departamento*>::iterator i = lDep.begin();

    while ((*i)->getId() != id && i != lDep.end()){
        i++;
    }

    if ((*i)->getId() == id)
        return *i;
    else
        return NULL;
}

Universidade* Principal ::retornaUniId (int id) {

    list<Universidade*>::iterator i = lUni.begin();

    while ((*i)->getId() != id && i != lUni.end()){
        i++;
    }

    if ((*i)->getId() == id)
        return *i;
    else
        return NULL;
}

Aluno* Principal ::retornaAluId(int id) {

    list<Aluno*>::iterator i = lAlu.begin();

    while ((*i)->getId() != id && i != lAlu.end()){
        i++;
    }

    if ((*i)->getId() == id)
        return *i;
    else
        return NULL;
}
