#include <stdio.h>
#include <string.h>

int main(){
    int opcao=0, countChar, cmp;
    char S1[100], S2[100], strAux[100];
    while(1){
        if(opcao==0){
        printf("Digite uma das opcoes a seguir: \n");
        printf("1 - Ler String\n");
        printf("2 - Imprimir tamanho da string\n");
        printf("3 - comparar string com uma nova string e imprimir resultado\n");
        printf("4 - Concatenar string com uma nova string e imprimir resultado\n");
        printf("5 - Imprimir o reverso da string\n");
        printf("6 - Contar quantas vezes um caractere aparece na string\n");
        printf("7 - Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2.\n");
        printf("8 - Verificar se uma string S2 e substring de S1. A string S2 deve ser informada pelo usuário\n");
        printf("9 - Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual e o tamanho da substring.\n");
        scanf("%d", &opcao);

        }
        if(opcao==1){
            printf("Digite a string S1: ");
            scanf("%s", &S1);
            opcao = 0;
        }

        if(opcao==2){
            /*countChar = 0;
            for(int i=0; i<100; i++){
                if(S1[i] != '\0'){
                    countChar++;
                } else {
                    break;
                }
            }
            printf("A string tem %d caracteres\n", countChar);
            */
            printf("A string tem %d caracteres\n", strlen(S1));
            opcao = 0;
        }

        if(opcao==3){
            printf("Digite a nova string: ");
            scanf("%s", &S2);
            cmp = strcmp(S1, S2);
            if(cmp==0){
                printf("As strings sao iguais\n");
            } else if (cmp<0){
                printf("A primeira string eh alfabeticamente menor que a nova\n");
            } else{
                printf("A primeira string eh alfabeticamente maior que a nova\n");
            }
            opcao=0;
        }

        if(opcao==4){
            printf("Digite a nova string: ");
            scanf("%s", &S2);
            strcpy(strAux, S1);
            strcat(strAux, S2);
            printf("A string concatenada eh %s\n", strAux);

            opcao=0;
        }

        if(opcao==5){
            printf("O reverso da string eh ");
            for(int i = strlen(S1); i>=0; i--){
                printf("%c", S1[i]);
            }
            printf("\n");
            opcao=0;

        }


    }





    return 0;
}
