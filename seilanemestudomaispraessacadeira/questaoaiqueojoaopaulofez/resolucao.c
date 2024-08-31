#include <stdio.h>
#include <math.h>

int main(){
    int sinal=0, indice=5, numerador=1, divisor=1, fatores[15], result, x, fatorAtual;
    printf("Digite o valor de X, em graus: ");
    scanf("%d", &x);
    for(int i=0; i<15; i++){
        //fazendo numerador
        for(int j=0; j<indice; j++){
            numerador *= x;
        }

        //fazendo divisor
        for(int j=indice; j>1; j--){
            divisor *= i;
        }
        //calculando e armazenando fator atual
        fatorAtual = numerador/divisor;
        fatores[i] = fatorAtual;

        if(sinal==0){
            result +=fatorAtual;
            sinal++;
        }
        else{
            result -= fatorAtual;
            sinal--;
        }
        indice +=2;
    }
    printf("O seno de X eh: %d\n", result);
    for(int i=0; i<15; i++){
        printf("%d, ", fatores[i]);
    }
}