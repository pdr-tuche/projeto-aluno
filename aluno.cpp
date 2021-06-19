/*• Criar Lista;
• Inserir novo aluno (ordenado pela matrícula OU final);
• Remover um aluno (matrícula);
• Buscar um aluno (matrícula):
    oApós busca, perguntar se deseja alterar o atributo Nota_1 ou Nota_2 do aluno;
          oSe SIM: receber novo valor e calcular a Média Final e situação;
                    MF = Nota_1*0.4 + Nota_2*0.6;
                    MF ≥ 6: Aprovado; MF < 6: Reprovado;
• Calcular a Média Final Aritmética de toda a turma;
• Listar todos os alunos cadastrados na Lista (com um índice do lado);
          oExemplo:
                    1 – Dados Aluno_1;
                    2 – Dados Aluno_2;
                    ...
                    N – Dados Aluno_N.
•Limpar Lista antes de fechar o programa;*/
#include "aluno.h"
using namespace std;

void Aluno::setNome(string a){
  if(a.size()>=2){
    nome = a;
  }else{
    nome = "INVALIDO.";
  }
}

string Aluno::getNome(){
  return nome;
}

void Aluno::setMatricula(string x){
    if(x.size() >= 3){
    matricula =x;
    }else{
      matricula = "000";
    }
}

string Aluno::getMatricula(){
  return matricula;
}

void Aluno::setIdade(int x){
  if(x >= 0 and x <=100){
    idade=x;
  }else{
    idade =0;
  }
}

int Aluno::getIdade(){
  return idade;
}

void Aluno::setNotas(float a, float b){
  if(a>0 and a<=10){
    nota1 = a;
    }else{
      nota1 =0;
    }

  if(b>0 and b<=10){
    nota2 = b;
    }else{
      nota2 =0;
    }
}

float Aluno::getNota1(){
  return nota1;
}
float Aluno::getNota2(){
  return nota2;
}

float Aluno::getMedia(){
  media_final = (nota1+nota2)/2;
  return media_final;
}

string Aluno::AprovadoReprovado(){
  if(media_final >=6){
    return "APROVADO.";
  }else{
    return "REPROVADO.";
  }
}
void Aluno::mostrarInfo(){
  cout << matricula << " "<< idade << " " << nome <<" " << nota1<< " "<<nota2<<" media:"<<getMedia() << "situaçao: " <<AprovadoReprovado()<< endl;
}

Aluno obterInfo(){
  Aluno aluno;
  string temp;
  int temp2;
  float temp_nota1,temp_nota2;

  cout <<"digite a matricula\n";
  cin >> temp;
  aluno.setMatricula(temp);

  cout << "digite o nome:\n";
  cin >>temp;
  aluno.setNome(temp);

  cout<<"digite a idade\n";
  cin >> temp2;
  aluno.setIdade(temp2);

  cout<<"digite as duas notas\n";
  cin >> temp_nota1 >> temp_nota2;
  aluno.setNotas(temp_nota1, temp_nota2);

  return aluno;
}


int menu(){
  int opcao;
  cout<< "1 - criar lista\n";
  cout << "2- inserir novo aluno.\n";
  cout <<"3 remover um anluno.\n";
  cout<<"4- Buscar aluno\n";
  cin >> opcao;
  return opcao;
  system("clear");
}
