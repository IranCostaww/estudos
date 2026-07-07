#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia,mes,ano;
}data_nascimento;

typedef struct{
    char nome[40];
    float peso;
    char cor[40];
}animal;

void imprimirAnimal(animal a){
    printf("\n Nome:%s\n", a.nome);
    printf("\n Peso:%.2f", a.peso);
    printf("\n Cor:%s\n", a.cor);
}

void imprimirNascimento(data_nascimento a){
    printf("\n Data de nascimento: %d/%d/%d\n", a.dia, a.mes, a.ano);
}
int main(void){
     
    animal animal;
    data_nascimento nascimento;

    printf("Qual nome do felino:\n");
    fgets(animal.nome, 40, stdin);
    

    printf("Digite o peso do felino:\n");
    scanf("%f", &animal.peso);
    getchar();
    printf("Qual a cor do felino:\n");
    fgets(animal.cor, 40, stdin);

    printf("Digite a data de nascimento");
    scanf("%d%d%d", &nascimento.dia, &nascimento.mes, &nascimento.ano);

     
    imprimirAnimal(animal);
    imprimirNascimento(nascimento);

    return 0;
}