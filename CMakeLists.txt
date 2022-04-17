cmake_minimum_required(VERSION 3.21)
project(sistema_academico)

set(CMAKE_CXX_STANDARD 14)

add_executable(sistema_academico main.cpp Universidade.h Universidade.cpp Pessoa.h Pessoa.cpp Principal.h Principal.cpp Departamento.h Departamento.cpp Professor.h Professor.cpp Aluno.cpp Aluno.h Disciplina.cpp Disciplina.h ElAluno.cpp ElAluno.h ElDisciplina.cpp ElDisciplina.h ListaAluno.cpp ListaAluno.h ListaDisciplina.cpp ListaDisciplina.h ElDepartamento.cpp ElDepartamento.h ListaDepartamento.cpp ListaDepartamento.h)
