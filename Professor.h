#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Professor:public Pessoa{

    Universidade* pUnivFiliado;
    Departamento* pDptoFiliado;

public:
    Professor();
    ~Professor();
    Professor(int diaNas, int mesNas, int anoNas, const char *nome);

    void setUnivFiliado(Universidade* pUniv);
    void setDptoFiliado(Departamento* pDpto);

    void ImprimeUniversidade();
    void ImprimeDptoFiliado();
};
