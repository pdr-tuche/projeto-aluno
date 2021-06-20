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
    system("clear");
    if(opcao ==1){
      do{
        Aluno temp = obterInfo();
        turma.push_back(temp);
        sort(turma.begin(),turma.end(), compara_matricula);

        cout<< "continuar cadastrando?\n";
        cin>>flag;
        }while(flag == "sim");
        system("clear");
    }

    if(opcao==2){
      Aluno temp;
      temp = obterInfo();
      turma.push_back(temp);
      system("clear");
    }

    if(opcao ==3){
      string aux;
      vector<Aluno>::iterator it;
      it = turma.begin();
      cout<<"insira a matricula\n";
      cin>> aux;
      for(int i=0;i<turma.size();i++){
        if(aux == turma[i].getMatricula()){
          turma.erase(it+i);
          
        }
      }
      system("clear");
    }

    if(opcao==4){
      string matricula;
      string flag22;
      string flag33;
      float aux;
      cout<<"digite a matricula para buscar:\n";
      cin>> matricula;
      for(int i=0;i<turma.size();i++){
        if(turma[i].getMatricula() == matricula){
          cout<<"mudar nota1,nota2 do aluno?\n";
          cin>> flag22;
          if(flag22 == "sim"){
            cout<<"digite 1 para nota1 e 2 para nota2\n";
            cin>> flag33;
            if(flag33 == "1"){
              cout<<"digite a nova nota\n";
              cin>> aux;
              turma[i].setNota1(aux);
            }
            if(flag33 =="2"){
              cout<<"digite a nova nota\n";
              cin>> aux;
              turma[i].setNota2(aux);
            }
          }
        }
      }
      system("clear");
    }
    

    if(opcao==5){
      for(int i=0;i<turma.size();i++){
        cout<< "indice:" <<i+1 << " - ";
        turma[i].mostrarInfo();
      }
    }

    if(opcao==6){
      float acumulador;
      for(int i=0;i< turma.size();i++){
        acumulador += turma[i].getMedia();
      }
      system("clear");
      cout<< "media da turma é de: "<<acumulador/turma.size()<<endl;

    }

    if(opcao==7){
      break;
    }

  }while(opcao == 1 or opcao == 2 or opcao == 3 or opcao ==4 or opcao == 5 or opcao==6 or opcao==7);

}
