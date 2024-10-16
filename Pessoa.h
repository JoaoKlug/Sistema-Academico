#pragma once

class Pessoa {
protected:
    int diaNasP;
    int mesNasP;
    int anoNasP;
    char nomeP[20];
    int idadeP;

public:
    Pessoa();
    ~Pessoa();
    Pessoa(int diaNas, int mesNas, int anoNas, const char *nome);

    void CalcIdade(int diaAtual, int mesAtual, int anoAtual);
    void ImprimeIdade();

    void setNomeP(const char* nome);
    char* getNomeP();
};
