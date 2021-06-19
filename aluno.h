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
    
};

int menu();
Aluno obterInfo();


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