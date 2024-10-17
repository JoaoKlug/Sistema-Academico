#include "stdfxa.h"
#include "Departamento.h"
#include "Universidade.h"

Departamento::Departamento(){
    strcpy(nomeD,"");
    pUnivFiliada = nullptr;
}

Departamento::~Departamento(){}

Departamento::Departamento(const char* nome){
    strcpy(nomeD, nome);
    pUnivFiliada = nullptr;
}

void Departamento::setNomeDpto(const char* nome){
    strcpy(nomeD, nome);
}

char* Departamento::getNomeDpto(){
    return nomeD;
}

void Departamento::setUnivFiliada(Universidade* pUniv){
    if(pUniv != nullptr)
        pUnivFiliada = pUniv;
    else
        cout << "Ponteiro universidade nulo atribuido a departamento" << endl;
}

void Departamento::ImprimeUnivFiliada(){
    if(pUnivFiliada != nullptr)
        cout << nomeD << "-Universidade: " << pUnivFiliada->getNomeUniv() << endl;
}
