#include "Aluno.h"

Aluno::Aluno():Pessoa(){
    raAl = -1;
}

Aluno::~Aluno(){}

Aluno::Aluno(int diaNas, int mesNas, int anoNas, const char *nome, int ra):
    Pessoa(diaNas,mesNas,anoNas,nome){
    raAl = ra;
}

void Aluno::setRaAl(int ra){
    raAl = ra;
}

int Aluno::getRaAl(){
    return raAl;
}
