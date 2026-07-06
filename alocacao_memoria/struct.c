#include <stdio.h>
#include <stdlib.h>

struct tp_endereco{
    char bairro[40];
    char rua[40];
    char cidade[40];
    int numero;
    int cep;
};

struct tp_data_nascimento{
    int dia;
    int mes;
    int ano;
};

struct tp_dados_do_cliente{
    char nome[40];
    int cpf;
    //declarando variavel
    struct tp_endereco endereco;

    //declarando variavel
    struct tp_data_nascimento data_nascimento;
}
cad_cliente[2];



int main(void){

    int i;

    printf("\n______Cadastro do cliente______\n\n");

for(i = 0; i < 2; i++){

    printf("Nome do cliente:\n");
    getchar(); // limpa o ENTER que pode ter ficado no buffer
    fgets(cad_cliente[i].nome, 40, stdin);

    printf("\nCPF do cliente:\n");
    scanf("%d", &cad_cliente[i].cpf);

    printf("\nBairro onde mora:\n");
    getchar();
    fgets(cad_cliente[i].endereco.bairro, 40, stdin);

    printf("\nRua onde mora:\n");
    fgets(cad_cliente[i].endereco.rua, 40, stdin);

    printf("\nNumero do endereco:\n");
    scanf("%d", &cad_cliente[i].endereco.numero);

    printf("\nCEP do endereco:\n");
    scanf("%d", &cad_cliente[i].endereco.cep);

    printf("\nDia que nasceu:\n");
    scanf("%d", &cad_cliente[i].data_nascimento.dia);

    printf("\nMes que nasceu:\n");
    scanf("%d", &cad_cliente[i].data_nascimento.mes);

    printf("\nAno que nasceu:\n");
    scanf("%d", &cad_cliente[i].data_nascimento.ano);
}

    return 0;

}