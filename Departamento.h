#pragma once

class Universidade; //contorna recursividade

class Departamento{

    char nomeD[10];
    Universidade* pUnivFiliada;

public:
    Departamento();
    ~Departamento();

    Departamento(const char*nome);

    void setNomeDpto(const char* nome);
    char* getNomeDpto();

    void setUnivFiliada(Universidade* pUniv);
    void ImprimeUnivFiliada();

};
