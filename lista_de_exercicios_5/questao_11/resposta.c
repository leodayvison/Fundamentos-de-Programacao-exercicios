#include <stdio.h>
#include <math.h>

int main(){
    int maiorLinha=0, menorCol=0, soma=0, valorMaiorLinha, valorMenorColuna, n, m;
    //recebendo a ordem da matriz
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas: ");
    scanf("%d", &m);
    int matriz[n][m];

    //preenchenod matriz
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Adicione um valor para a matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //procurando a maior linha
    for(int i=0; i<n; i++){
        soma = 0;
        for(int j=0; j<m; j++){
            soma += pow(matriz[i][j], 2);
        }
        if(i == 0){
            valorMaiorLinha = soma; //atribui qualuqer valor presente a fim de comparacao
        } else if(soma > valorMaiorLinha){
            valorMaiorLinha = soma;
            maiorLinha = i;
        }
    }
    
    //procurando a menor coluna
    for(int j=0; j<n; j++){
        soma = 0;
        for(int i=0; i<m; i++){
            soma += matriz[i][j];
        }
        if(j == 0){
            valorMenorColuna = soma; //atribui qualuqer valor presente a fim de comparacao
        } else if(soma < valorMenorColuna){
            valorMenorColuna = soma;
            menorCol = j;
        }
    }

    //impriimndo tudo
    printf("A maior linha eh %d e a menor coluna eh %d\n", maiorLinha, menorCol);
    printf("teste: valor da maior linha eh %d e menor coluna eh %d", valorMaiorLinha, valorMenorColuna);

    
    return 0;
}