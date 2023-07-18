#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char ip[15]=""; 
    printf("Introduzca la ip: ");
    scanf("%s", ip);
    int longitud = sizeof(ip) -1;
    int entero = 0;

    for (int i = 0; i < longitud; i++) {
        if (isdigit(ip[i])) {
            entero = entero * 10 + (ip[i] - '0');
        }
    }

    printf("%d\n", entero);



    return 0;
}
