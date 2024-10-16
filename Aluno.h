#pragma once
#include "Pessoa.h"

class Aluno:public Pessoa{

    int raAl;

public:
    Aluno();
    ~Aluno();
    Aluno(int diaNas, int mesNas, int anoNas, const char *nome, int ra);

    void setRaAl(int ra);
    int getRaAl();

};
