#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ){


    float **mat;

    mat = malloc(8 * sizeof(float*));

    for(int i = 0; i<8; i++){
      mat[i] = malloc(8 * sizeof(float));
    }
    srand(time(NULL));

    for(int i = 0; i<8; i++){
      for(int j = 0; j<8; j++){
        *(*(mat + i) + j) = rand() %100;
      }
    }
    printf("Matriz Dinamica com aritmetica de ponteiros\n\n");

     for(int i = 0; i<8; i++){
      for(int j = 0; j<8; j++){
         printf("%5.0f", *(*(mat + i) + j));
      }
      printf("\n");
    }
    for(int i = 0; i<8; i++){
      free(*(mat + i));
    }
    free(mat);
    return 0;

}
