#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Aluno {
  private:
    string matricula;
    string nome;
    int idade;
    float nota1, nota2;
    float media_final;
    string situacao;

  public:
    Aluno(){}
  
    
    void setNome(string a);
    string getNome();
    void setMatricula(string x);
    string getMatricula();
    void setIdade(int x);
    int getIdade();
    void setNotas(float a, float b);
    float getNota1();
    float getNota2();
    float getMedia();
    string AprovadoReprovado();
    void mostrarInfo();
    void setNota1(float a);
    void setNota2(float a);
    
    
    
};

int menu();
Aluno obterInfo();
bool compara_matricula(Aluno a, Aluno b);
