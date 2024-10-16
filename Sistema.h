#pragma once
#include "Professor.h"
#include "Universidade.h"
#include "Departamento.h"

class Sistema{

    Professor Joao;
    Professor Newton;
    Professor Ada;

    Universidade Utfpr;
    Universidade Oxford;
    Universidade Ita;

    Departamento Dainf;
    Departamento Fisica;
    Departamento Sociologia;

    int diaAtual, mesAtual, anoAtual;

public:
    Sistema();
    void Executar();
    ~Sistema();

};
