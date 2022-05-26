# projeto-aluno
consiste em um sistema de gerenciamento de alunos. Utilizando as bibliotecas Vector e algorithm

A CLI apresenta o seguinte menu:

<img src="./ImgReadme/menu.png">

No cadastro dos alunos, as entradas devem ser do tipo: String, String, Int, Float, Float, respectivamente. Após o cadastro será perguntado se deseja continuar cadastrando, o qual deverá ser respondido com (sim/nao).

<img src="./ImgReadme/cadastro.png" />

a CLI irá lhe informar dados sobre a turma conforme é mostrado no menu. No entando apresenta um bug quando se preenche o cadastro de aluno com nota 0 e 5 (em outros casos cujo a media nao e maior ou igual a 6 também), a CLI mostra que aluno com media 4.5 é Aprovado, no entanto se o aluno passar pelo tratamento de correção de nota seguindo os passos: ```4- Buscar aluno, digitar numero da matricula, informar a nota a ser alterada (nesse caso irei mudar a nota2), se a nota for alterada para a mesma nota, neste caso a nota 5, apos o tratamento trará que o aluno foi reprovado.

Necessário revisar o codigo com mais calma.
