#include "stdfxa.h"
#include "Pessoa.h"


Pessoa::Pessoa(){
    strcpy(nomeP,"");
    diaNasP = 0;
    mesNasP = 0;
    anoNasP = 0;
    idadeP = -1;
}
Pessoa::~Pessoa(){}

Pessoa::Pessoa(int diaNas, int mesNas, int anoNas, const char *nome){
    diaNasP = diaNas;
    mesNasP = mesNas;
    anoNasP = anoNas;
    strcpy(nomeP,nome);
    idadeP = -1;
}

void Pessoa::CalcIdade(int diaAtual, int mesAtual, int anoAtual) {

    idadeP = anoAtual - anoNasP;

    if (mesAtual < mesNasP)
        idadeP--;
    else if (mesAtual == mesNasP) {
        if (diaAtual > diaNasP)
            idadeP--;
    }
}

void Pessoa::ImprimeIdade() {
    if(idadeP!=-1)
        cout << nomeP << "-Idade: " << idadeP << endl;
}

void Pessoa::setNomeP(const char* nome){
    strcpy(nomeP,nome);
}

char* Pessoa::getNomeP(){
    return nomeP;
}

