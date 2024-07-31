#include <stdio.h>

int main() {
    // Recepção de dados
    int qtdTermos, termoAnterior = 0, termoAtual = 1;
    printf("Digite a quantidade N de termos que serão calculados: ");
    scanf("%d", &qtdTermos);

    // Gerando a sequência de Fibonacci
    for (int i = 0; i < qtdTermos; i++) {
        printf("%d, ", termoAtual);
        
        // Atualizando os termos
        int novoTermo = termoAtual + termoAnterior;
        termoAnterior = termoAtual;
        termoAtual = novoTermo;
    }

    printf("\n");
    return 0;
}