#pragma once
#include"Departamento.h"

class Universidade{

    char nomeU[10];
    Departamento* pDptoFiliado[50];
    int idxDpto;

public:
    Universidade();
    ~Universidade();

    Universidade(const char* nome);

    void setNomeUniv(const char* nome);
    char* getNomeUniv();

    void setDptoFiliado(Departamento* pDpto);
    void ImprimeDptosFiliados();

};
