#include <stdio.h>

struct alunos {
float nota1, nota2, media;
char nome[30];
}aluno[3];

float media(float n1, float n2, int j);

int main(void) {
//   struct alunos aluno[3];
  for(int i = 0; i < 3; i++){
  printf("Digite o nome do aluno: ");
  scanf(" %[^\n]", aluno[i].nome);

  printf("Digite a primeira nota: ");
  scanf(" %f", &aluno[i].nota1);

  printf("Digite a segunda nota: ");
  scanf(" %f", &aluno[i].nota2);

  printf("Média do aluno %s: %.2f\n", aluno[i].nome, media(aluno[i].nota1, aluno[i].nota2, i) );
  }

  return 0;
}

float media(float n1, float n2, int j){
    aluno[j].media = (n1 + n2)/2;

return (aluno[j].media);
}