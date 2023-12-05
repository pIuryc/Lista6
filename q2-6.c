#include <stdio.h>

struct estoque {
char nomePeca[50];
int idproduto, idpedido;
float preco;
};

int main(void) {
struct estoque pedido;
 
  printf("Digite o id do pedido: ");
  scanf(" %d", &pedido.idpedido);
  
  printf("Digite o nome da peça: ");
  scanf(" %[^\n]", pedido.nomePeca);
  
  printf("Digite o id do produto: ");
  scanf(" %d", &pedido.idproduto);
  
  printf("Digite o preço do produto: ");
  scanf(" %f", &pedido.preco);
  
  return 0;
}