/*Desenvolva um programa que deve ler um arquivo csv intitulado “notas_alunos.csv”. O arquivo deve ter a seguinte estrutura:

aluno: Nome do aluno;
nota_1: Primeira nota;
nota_2: Segunda nota;
faltas: Número de faltas;

O programa lerá esse arquivo e criará duas colunas. A primeira coluna será “media”, que terá a média das duas notas do aluno. A segunda será “situacao”, com os valores: APROVADO ou REPROVADO.

O aluno que tiver mais de 5 faltas ou possuir média menor que sete, será reprovado. O programa deverá salvar esse novo dataframe com o nome “alunos_situacao.csv”.

Por fim, o programa deverá mostrar na tela:
- o maior número de faltas;
- a média geral das notas dos alunos;
- e a maior média.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
  float nota1, nota2;
  int faltas;
  printf("\t\t\t\n =======PROGRAMA PARA LER ARQUIVO COM A NOTA DOS ALUNOS=======\n\n");

}