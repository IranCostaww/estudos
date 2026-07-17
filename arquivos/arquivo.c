#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    void escrever(char f[]){
        FILE *file = fopen(f, "w");
        char texto[500];

        if(file){
            printf("Digite uma frase(ENTER para finalizar):\n");
            fgets(texto, 500, stdin);
            while(strlen(texto) > 1){
                fputs(texto, file);
                fgets(texto, 500, stdin);
            }
            fclose(file);
        }else
            printf("\nERRO ao abrir arquivo!\n");
    }

int main(){

    char nome[] = ("conto.txt");

    escrever(nome);

    return 0;
}
