#include <iostream>
#include "aluno.h"
using namespace std;
int main() {
  vector <Aluno> turma;
  string flag;
  string flag2;
  int opcao;
  do{
    opcao = menu();
      switch(opcao){
      case 1:
        do{
          Aluno temp = obterInfo();
          turma.push_back(temp);
          cout<< "continuar cadastrando?\n";
          cin>>flag;
        }while(flag == "sim");
        opcao =menu();
        break;

      case 2:
        Aluno temp;
        temp = obterInfo();
        turma.push_back(temp);
        opcao =menu();
        break;
      }
  }while(opcao == 1 or opcao == 2 or opcao == 3 or opcao ==4);
    

  for(int i=0;i<turma.size();i++){
    turma[i].mostrarInfo();
  }
}