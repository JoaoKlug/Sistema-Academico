#include "stdfxa.h"
#include "Sistema.h"

Sistema::Sistema():
    Joao(18, 9, 2004, "Joao Gabriel"),
    Newton(4, 1, 1643, "Isac Newton"),
    Ada(10,12,1815, "Ada Lovelace"),
    Utfpr("UTFPR"),
    Oxford("OXFORD"),
    Ita("ITA"),
    Dainf("DAINF"),
    Fisica("FISICA"),
    Sociologia("Sociologia")
{
    diaAtual = 0;
    mesAtual = 0;
    anoAtual = 0;
}
Sistema::~Sistema(){}

void Sistema::Executar(){

  struct tm *local;
  time_t seg;

  time(&seg);
  local = localtime(&seg);

  diaAtual = local->tm_mday;
  mesAtual = local->tm_mon;
  anoAtual = local->tm_year+1900;

  Joao.CalcIdade(diaAtual,mesAtual,anoAtual);
  Newton.CalcIdade(diaAtual,mesAtual,anoAtual);
  Ada.CalcIdade(diaAtual,mesAtual,anoAtual);

  Joao.setUnivFiliado(&Utfpr);
  Ada.setUnivFiliado(&Oxford);
  Newton.setUnivFiliado(&Ita);

  Joao.setDptoFiliado(&Dainf);
  Ada.setDptoFiliado(&Sociologia);
  Newton.setDptoFiliado(&Fisica);

  Dainf.setUnivFiliada(&Utfpr);
  Sociologia.setUnivFiliada(&Oxford);
  Fisica.setUnivFiliada(&Ita);

  Utfpr.setDptoFiliado(&Dainf);
  Oxford.setDptoFiliado(&Sociologia);
  Ita.setDptoFiliado(&Fisica);


  /*Joao.ImprimeIdade();
  Newton.ImprimeIdade();
  Ada.ImprimeIdade();*/


  Joao.ImprimeUniversidade();
  Newton.ImprimeUniversidade();
  Ada.ImprimeUniversidade();

  Joao.ImprimeDptoFiliado();

  Utfpr.ImprimeDptosFiliados();
  Dainf.ImprimeUnivFiliada();

}

