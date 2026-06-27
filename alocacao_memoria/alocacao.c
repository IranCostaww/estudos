#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main( ){
    int  i, tam, *vet;
    
    printf("Qual tamanho do vetor:\n");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam *sizeof(int));
     if(vet){
        printf("Memoria alocada com sucesso\n");
            for(i = 0; i<tam; i++){
                *(vet + i) = rand() % 100;
            }
            for(i = 0; i<tam; i++){
                printf("%d \n", *(vet + i));
            }
             printf("\n");  

             printf("Digite o novo tamanho do vetor:\n");
             scanf("%d", &tam);

             vet = realloc(vet, tam * sizeof(int));
            printf("Novo vetor, depois do realloc\n");
             for(i = 0; i<tam; i++){
                printf("%d \n", *(vet + i));
            }
             printf("\n");  
            free(vet);
     }
     else{
        printf("Memoria nao alocada\n");
     }
}