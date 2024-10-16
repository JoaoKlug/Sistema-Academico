#include "stdfax.h"
#include "Professor.h"

Professor::Professor():Pessoa(){
    pUnivFiliado = nullptr;
    pDptoFiliado = nullptr;
}
Professor::~Professor(){
    pUnivFiliado = nullptr;
    pDptoFiliado = nullptr;
}

Professor::Professor(int diaNas, int mesNas, int anoNas, const char *nome):
    Pessoa(diaNas,mesNas,anoNas,nome){
    pUnivFiliado = nullptr;
    pDptoFiliado = nullptr;
}

void Professor::setUnivFiliado(Universidade* pUniv){
    if(pUniv != nullptr)
        pUnivFiliado = pUniv;
    else
        cout << "Ponteiro de universidade nulo atribuido a Pessoa" << endl;
}

void Professor::setDptoFiliado(Departamento* pDpto){
    if(pDpto != nullptr)
        pDptoFiliado = pDpto;
    else
        cout << "Ponteiro de departamento nulo atribuido a Pessoa" << endl;
}

void Professor::ImprimeUniversidade(){
    if(pUnivFiliado!= nullptr)
        cout << nomeP << "-Universidade: " << pUnivFiliado->getNomeUniv() << endl;
}

void Professor::ImprimeDptoFiliado(){
    if(pDptoFiliado!= nullptr)
        cout << nomeP << "-Departamento: " << pDptoFiliado->getNomeDpto() << endl;
}
