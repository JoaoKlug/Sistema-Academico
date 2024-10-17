#include"stdfxa.h"
#include "Universidade.h"

Universidade::Universidade()
{
    strcpy(nomeU,"");
    for(int i = 0; i<50;i++){pDptoFiliado[i] = nullptr;}
    idxDpto = 0;
}
Universidade::~Universidade(){}

Universidade::Universidade(const char* nome){
    strcpy(nomeU,nome);
    for(int i = 0; i<50;i++){pDptoFiliado[i] = nullptr;}
    idxDpto = 0;
}

void Universidade::setNomeUniv(const char* nome){
    strcpy(nomeU,nome);
}

char* Universidade::getNomeUniv(){
    return nomeU;
}

void Universidade::setDptoFiliado(Departamento* pDpto){
    if(pDpto != nullptr || idxDpto<50){
        pDptoFiliado[idxDpto] = pDpto;
        idxDpto++;
    }else
        cout << "Ponteiro departamento nulo atribuido a universidade ou Limite de 50 departamentos excedido" << endl;
}

void Universidade::ImprimeDptosFiliados(){
    cout << nomeU << "-Departamentos: " << endl;
    for(int i = 0; i<=idxDpto; i++){
        if(pDptoFiliado[i] != nullptr)
            cout << pDptoFiliado[i]->getNomeDpto() << endl;
    }
}
