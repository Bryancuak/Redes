#include <stdio.h>

/* 
    Codigo realizado por: Bryan Cuaquehua 
    La funcion de este codigo es que a partir de un vector dado, se busque la 
    suma de dos elementos del arreglo que resulte un numero objetivo. 

*/

void impArreglo(int nums[], int tamano) {
    printf("[");
    for (int i = 0; i < tamano; ++i) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", nums[i]);
    }
    printf("]\n");
}

void sumPares(int nums[], int tamano, int objetivo) {
    int found = 0;

    printf("Arreglo de numeros ingresado:\n");
    impArreglo(nums, tamano);

    printf("\nParejas que suman %d:\n", objetivo);
    for (int i = 0; i < tamano - 1; ++i) {
        for (int j = i + 1; j < tamano; ++j) {
            if (nums[i] + nums[j] == objetivo) {
                found = 1;
                printf("[%d] y [%d] = %d\n", i, j, objetivo);
            }
        }
    }

    if (!found) {
        printf("No se encontraron numeros que sumen %d\n", objetivo);
    }
}

int main() {
    int n;
    printf("Ingrese el numero objetivo (N): ");
    scanf("%d", &n);

    int tamano;
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &tamano);

    int nums[tamano];
    printf("Ingrese los elementos del arreglo: ");
    for (int i = 0; i < tamano; ++i) {
        scanf("%d", &nums[i]);
    }

    sumPares(nums, tamano, n);

    return 0;
}
