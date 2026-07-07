#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
    char marca[40];
    char modelo[40];
    int ano;
    char estado[40];
}carro;

typedef struct{
    carro carro;
    char nome_da_loja[40];
    char bairro[40];
    char rua[40];
    char cidade[40];
    int numero;
    int ceep;
}loja;

void imprimirInformacao(loja a){

    printf("\n_______Informacao do Automovel_______\n\n");
    printf("Marca do automovel:%s\n", a.carro.marca);
    printf("Modelo do automovel:%s\n", a.carro.modelo);
    printf("Ano do automovel:%d\n", a.carro.ano);
    printf("Estado do automovel:%s\n", a.carro.estado);

    printf("\n_______Informacao da Concessionaria_______\n\n");
    printf("Nome da concessionaria:%s\n", a.nome_da_loja);
    printf("\nEndereco da loja:%s,%s,%s,%d,%d", a.bairro,a.rua,a.cidade,a.numero,a.ceep);
}
//função para ler as informações
loja lerInformacoes(){
    loja l;
    //Ler informações do automovel
    printf("Digite a marca do automovel:\n");
    fgets(l.carro.marca, 40, stdin);

    
    printf("Digite o modelo do automovel:\n");
    fgets(l.carro.modelo, 40, stdin);
    
    printf("Digite o ano do automovel:\n");
    scanf("%d", &l.carro.ano);
    getchar();
    printf("Digite o estado do automovel:\n");
    fgets(l.carro.estado, 40, stdin);
    
    printf("Digite o nome da concessionaria:\n");
    fgets(l.nome_da_loja, 40, stdin);

    printf("Digite o bairro da concessionaria:\n");
    fgets(l.bairro, 40, stdin);
    l.bairro[strcspn(l.bairro, "\n")] = '\0';

    printf("Digite a rua da concessionaria:\n");
    fgets(l.rua, 40, stdin);
    l.rua[strcspn(l.rua, "\n")] = '\0';

    printf("Digite a cidade da concessionaria:\n");
    fgets(l.cidade, 40, stdin);
    l.cidade[strcspn(l.cidade, "\n")] = '\0';
    
    printf("Digite o numero da concessionaria\n");
    scanf("%d", &l.numero);
    getchar();

    printf("Digite o ceep da concessionaria\n");
    scanf("%d", &l.ceep);
    getchar();

    return l;
}



 int main(void){

    loja a;

    a = lerInformacoes();
    imprimirInformacao(a);

    return 0;
 }
