#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
    Codigo realizado por: Bryan Cuaquehua Rodriguez
    La primera funcion se la pedi a chatgpt, lo que hace es convertir de decimal a 
    binario por medio de una funcion recursiva, si el número es mayor que 1, se llama 
    a la función decimalABinario de nuevo con el cociente de la división entera num / 2. 
    Luego se imprime el residuo de la división entera num % 2, que corresponde a un dígito binario.
    El codigo a partir de una direccion ip ingresada por el usuario secciona esta ip en partes 
    usando los puntos de esta direccion como es una ipv4 son 4 partes las que se tendran, se 
    declara una bandera para verificar si es numero entero y se inicializa en 1, en la 
    siguiente condicional si la cantidad de partes es igual que 4 realiza la verificacion 
    de cada parte de la ip, que no sea menor que 0 y no mayor a 255, sino  la bandera 
    se cambia de valor a 0 y te muestra el mensaje de que la ip no es valida, por 
    ultimo imprime la ip en binario.
*/
void decimalABinario(int num){
    int bits[8] = {0}; // Array para almacenar los dígitos binarios
    int i = 0;

    while (num > 0) {
        bits[i] = num % 2;
        num /= 2;
        i++;
    }

    // Rellena con ceros a la izquierda si es necesario
    while (i < 8) {
        bits[i] = 0;
        i++;
    }

    // Imprime los dígitos binarios en orden inverso (de derecha a izquierda)
    for (i = 7; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}


int combinaciones(bits_prestados){
    if (bits_prestados < 1) return 0;
    if (bits_prestados > 23) return 0;

    int n = bits_prestados;
    //combinaciones = 2 ^ n; //4
    int bits[2] ={0,1};
    int vector[23] = {bits_prestados};
    printv(vector); //[0,0]

    for (int i = 0; i < combinaciones; ++i)
    {
        printv(vector);
    }
    



}


int main()
{
    char ip[16] = "";
    int mask;
    printf("Introduzca la IP: ");
    scanf("%15s", ip);
    printf("Introduzca el enmascaramiento: /");
    scanf("%d", &mask);

    int parte1 = 0, parte2 = 0, parte3 = 0, parte4 = 0;
    int cantidadPartes = sscanf(ip, "%d.%d.%d.%d", &parte1, &parte2, &parte3, &parte4);

    int esNumeroEntero = 1;

    if (cantidadPartes == 4) {
         // Verificar si cada parte de la IP es un numero entero
        if (!((parte1 >= 0 && parte1 <= 255) ||
            (parte2 >= 0 && parte2 <= 255) ||
            (parte3 >= 0 && parte3 <= 255) ||
            (parte4 >= 0 && parte4 <= 255))) {
            esNumeroEntero = 0;
        }
    } else {
        esNumeroEntero = 0;
    }

    if (esNumeroEntero) {
        printf("IP en decimal: %s", ip);
        printf("\nIP en binario: ");
        decimalABinario(parte1);
        printf(".");
        decimalABinario(parte2);
        printf(".");
        decimalABinario(parte3);
        printf(".");
        decimalABinario(parte4);
        printf("\n");
    } else {
        printf("La IP ingresada no es un IP valido.\n");
    }

    return 0;
}
