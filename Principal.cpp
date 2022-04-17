//
// Created by Henrique on 14/03/2022.
//

#include "Principal.h"

Principal:: Principal ()
{
    //Incializacao das Pessoas
    Simao.Inicializa(3,10,1976, "Jean Simao");
    Zequinha.Inicializa(06,10,2003,"Zequinha Nunes");
    Greg.Inicializa(17, 03, 2003, "Greeeeeeeg");
    Ronilson.Inicializa(25, 11, 2002, "Ronilson da Silva");

    //Registrando as Universidades
    UTFPR.setNome ("Universidade Tecnologica Federal Do Parana");


    //Registrando os Departamentos
    DAINF.setNome ("Departamento Academico de Informatica");
    DAELN.setNome("Departamento Academico de Eletronica");
    DAFIS.setNome("Departamento Academico de Fisica");
    DAMAT.setNome("Departamento Academico de Matematica");

    //Registrando as Disciplinas
    FProg.setNome("Fundamentos de Programacao");
    ED1.setNome("Estrutura de Dados 1");
    TecProg.setNome("Tecnicas de Programacao");


    //Registrando Departamentos às universidades
    UTFPR.setDepartamento(&DAINF);
    UTFPR.setDepartamento(&DAELN);
    UTFPR.setDepartamento(&DAFIS);
    UTFPR.setDepartamento(&DAMAT);

    //Associando os Departamentos à Universidade
    DAINF.setUnivFiliado(&UTFPR);
    DAELN.setUnivFiliado(&UTFPR);
    DAFIS.setUnivFiliado(&UTFPR);
    DAMAT.setUnivFiliado(&UTFPR);

    //Associando os Departamentos as Disciplinas
    FProg.setDepFiliado(&DAINF);
    ED1.setDepFiliado(&DAINF);
    TecProg.setDepFiliado(&DAINF);


    //Associando as Universidades as Pessoas
    Simao.setUnivFiliado(&UTFPR);

    //Associando Departamentos às Pessoas
    Simao.setDepFiliado(&DAINF);

    //Associando Pessoas as disciplinas
    FProg.addAluno(&Zequinha);
    FProg.addAluno(&Greg);
    FProg.addAluno(&Ronilson);

    //Eliminando Greg...
    FProg.delAluno(&Greg);

    //Data do inicio do Projeto
    diaAtual = 14;
    mesAtual = 03;
    anoAtual = 2022;

    Execute ();
}

void Principal:: Execute ()
{
    Simao.Calc_imprime_idade(diaAtual,mesAtual,anoAtual);

    Simao.OndeTrabalho();

    UTFPR.imprimeDepartamentos();

    FProg.imprimeAlunos();

}

Principal:: ~Principal (){}


