#include <stdio.h>

int main(){
    int notas[20], aux;

    //pegando as notas
    for(int i=0; i<20; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%d", &notas[i]);
    }
    
    //esse loop vai percorrer o vetor e reorganizar
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){ //vamos comparar cada elemento do vetor com aqueles que vem depois.
            if(notas[i] < notas[i+j]){ //se um dos elementos a frente de I for maior que este:
                aux = notas[i]; //guardar o valor de I em uma variavel auxiliar;
                notas[i] = notas[i+j]; //substituir I pelo elemento maior;
                notas[i+j] = aux; // substituir o elemento maior por I.
            }
        }
    }
    //imprimindo tudo
    for(int i=0; i<20; i++){
        printf("%d, ", notas[i]);
    }

}
