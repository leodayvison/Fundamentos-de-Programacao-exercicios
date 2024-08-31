#include <stdio.h>

int main() {
    int sinal = 0, indice = 1;
    double fatorAtual, x, numerador, divisor, result = 0, fatores[15];
    
    // Lendo o valor de x
    printf("Digite o valor de X, em graus: ");
    scanf("%lf", &x);
    
    // Convertendo de graus para radianos
    x = x * (3.1415926 / 180.0);
    
    for(int i = 0; i < 15; i++) {
        numerador = divisor = 1;
        
        // Calculando o divisor (fatorial)
        for(int j = indice; j > 0; j--) {
            divisor *= j;
        }

        // Calculando o numerador (potência de x)
        for(int j = 0; j < indice; j++) {
            numerador *= x;
        }

        // Calculando e armazenando o fator atual
        fatorAtual = numerador / divisor;
        fatores[i] = fatorAtual;

        // Atualizando o resultado
        if(sinal == 0) {
            result += fatorAtual;
            sinal++;
        } else {
            result -= fatorAtual;
            sinal--;
        }
        
        indice += 2; // Atualiza o índice para a próxima iteração
    }

    // Imprimindo o resultado
    printf("O seno de X eh: %lf\n", result);
    
    // Imprimindo os fatores para verificar
    for(int i = 0; i < 15; i++) {
        printf("%f, ", fatores[i]);
    }

    return 0;
}