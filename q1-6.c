#include <stdio.h>

struct alunos {
float nota1, nota2, media;
char nome[30];
};

int main(void) {
  struct alunos aluno1;
  
  printf("Digite o nome do aluno: ");
  scanf(" %[^\n]", aluno1.nome);
  
  printf("Digite a primeira nota: ");
  scanf(" %f", &aluno1.nota1);
  
  printf("Digite a segunda nota: ");
  scanf(" %f", &aluno1.nota2);
  aluno1.media = (aluno1.nota1 + aluno1.nota2)/2;

  printf("Média do aluno %s: %.2f", aluno1.nome, aluno1.media);
  return 0;
}