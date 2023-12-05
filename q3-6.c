#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct VetorInfo {
    int *ponteiroMatriz;
    int quantidadeElementos;
    float media;
};


void gerarVetorEMedia(struct VetorInfo *info) {
    int i;
    int soma = 0;
    
    info->ponteiroMatriz = (int *)malloc(info->quantidadeElementos * sizeof(int));

    
    for (i = 0; i < info->quantidadeElementos; i++) {
        info->ponteiroMatriz[i] = rand() % 100;  
        soma += info->ponteiroMatriz[i];
    }

    info->media = (float)soma / info->quantidadeElementos;
}


int main() {
    struct VetorInfo info;

   
    srand(time(NULL));

    
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &info.quantidadeElementos);

    
    gerarVetorEMedia(&info);

   
    printf("\nVetor gerado:\n");
    for (int i = 0; i < info.quantidadeElementos; i++) {
        printf("%d ", info.ponteiroMatriz[i]);
    }

    printf("\n\nMédia dos elementos: %.2f\n", info.media);

    free(info.ponteiroMatriz);

    return 0;
}
