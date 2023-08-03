#include <stdio.h>
#include <string.h>
#include <limits.h>
/* 
    Codigo realizado por: Bryan Cuaquehua 
    La funcion de este codigo es a partir de un numero n, separar sus digitos
    y guardarlos en un arreglo para despues sumarle n a cierta posicion del
    arreglo y si esta suma supera el 10 los numeros se recorran de tal manera
    que en caso de que la suma sea 14, quede el 1 solo en una posicion, y el 4 se 
    le sume a la siguiente posicion 

*/

int main (){

    int numero = 13115127;
    char cadena[20];
    sprintf(cadena, "%d", numero);
    int digitos[10] = {0}; // Arreglo para marcar los digitos
    int digitosUnicos[20]; // Arreglo para almacenar los digitos unicos
    int numDigitosUnicos = 0; // Contador de digitos unicos
    
    for (int i = 0; i < strlen(cadena); i++) {
        int digito = cadena[i] - '0'; 
        
        if (digitos[digito] == 0) { //Verifica si hay digitos repetidos
            digitosUnicos[numDigitosUnicos] = digito;
            numDigitosUnicos++;
            digitos[digito] = 1; // Marca el digito como impreso
        }
    }
    
    printf("Numero: %d\nDigitos: [", numero);
    for (int i = 0; i < numDigitosUnicos; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", digitosUnicos[i]);
    }
    printf("]\n");

    // Realizar la suma deseada a los digitos 
    int suma = 10; //Numero a sumar
    int posicion = 3; // Posicion a la que se sumara
    printf("Suma: (%d,%d)\n",  posicion, suma);
    digitosUnicos[posicion] += suma;
    
    char cadena2[2];
    sprintf(cadena2, "%d", digitosUnicos[posicion]);

    if ((digitosUnicos[posicion])>=10)
        {   
            printf("Resultado: ");
            for (int i = 0; i < strlen(cadena2); i++) {
                int digito = cadena2[i] - '0'; 
                printf("%d", digito);
                
                    digitosUnicos[posicion] =cadena2[0];
                    digitosUnicos[posicion+1] +=cadena2[1];
                
            }
        }
    
    
    printf("\nDigitos: [");
    for (int i = 0; i < numDigitosUnicos; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", digitosUnicos[i]);
    }
    printf("]\n");


    //printf("\nEl valor maximo de un int es: %d", INT_MAX);

    return 0;
}