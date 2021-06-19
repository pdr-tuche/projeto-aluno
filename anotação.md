Crie um programa que gerencie uma Lista Dinâmica Encadeada de Alunos de uma turma.
O programa deverá ser implementado com uma TAD (Tipo Abstrato de Dados), ou seja, terá um arquivo com as declarações das funções, outro com a implementação das funções e um terceiro arquivo com a main.
A estrutura do aluno deve conter:
• Nome;
• Matrícula;
• Idade;
• Nota_1;
• Nota_2;
• Média Final;
• Situação (aprovado OU reprovado);
O programa deve ter um menu com as seguintes opções:
• Criar Lista;
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
•Limpar Lista antes de fechar o programa;
Anexar na questão a pasta zipada com seu projeto, conténdo os arquivos básicos da TAD mais os arquivos da criação do projeto