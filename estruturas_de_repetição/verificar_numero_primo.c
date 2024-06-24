#include <stdio.h>
#include <stdbool.h>
int main(){
    //criando variáveis para armazenar o número e a resposta
    int numero;
    bool resposta = true; //a resposta inicia com verdadeiro, pois os loops vão checar se existe um caso que falsifica a tese de que o numero é primo
    printf("digite um numero: ");
    scanf("%d", &numero);
    
    //primeira solução (SIMULANDO FOR COM WHILE):
    int i = numero - 1; //variável de comando
    while(i>=2){
        if(numero%i == 0){
            resposta = false; //transforma a resposta em false caso encontre um divisor
        }
        i--;
    }
    //segunda solução (SIMULANDO FOR COM WHILE TRUE):
    int j = numero - 1; //variável de comando
    while(true){
        if(numero%j == 0){
            resposta = false;
            break; //para o loop
        }
        else if(j == 2){
            break; //para o loop se a variável de comando chegar em 2
        }
        j--;
    }

    //terceira solução (EXERCITANDO A CONDIÇÃO WHILE):
    int k = numero - 1; //variável de comando
    while (numero%k != 0){ //verifica a primaridade, e para se o numero não for primo
    k--;
    }
    if(k>=2){
        resposta = false; //o loop vai terminar quando a variável de comando for 1, pois todos os numeros sao divisiveis por ele, entao o numero só não será primo se a variável tiver terminado sendo maior que 1
    }
    if(resposta == true){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}
