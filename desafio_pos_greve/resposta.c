#include <stdio.h>

int main(){
    
    int idd, senhaUsuario, senhaPadrao = 123456; //variavel p armazenar as idades, senhas e a senha padrao dos usuarios

    for(int i=1; i<=5; i++){
        printf("Usuario %d, digite sua idade: ", i);
        scanf("%d", &idd);

        if(idd < 18){
            printf("Voce nao e maior de idade. Acesso nao permitido.\n");
        }
        else{
            for(int j=2; j>=0; j--){ //esse loop vai decrementar pq a variavel de comando vai dizer a qtd de tentativas restantes. Ainda roda quando igual a zero, pra indicar a mensagem de conta bloqueada.
                if(j==2){
                    printf("Voce e maior de idade. Pode tentar acessar a rede social.\n");
                }
                printf("Digite a senha: ");
                scanf("%d", &senhaUsuario);

                if(senhaUsuario == senhaPadrao){
                    printf("Acesso permitido.\n"); //acertou
                    break; //encerrar o loop pra nao perguntar dnv
                }
                else if(j>0){
                    printf("Senha incorreta. Voce tem mais %d tentativa(s)\n", j); //errou mas tem chance
                }
                else{
                    printf("Conta bloquada devido a muitas tentativas incorretas.\n"); // errou demais 
                }
            }
        }
    }
}