#include <stdio.h>
int main(){
    int numero = 10;
    struct frame
    {
        int id;
        int ip[12];
        char ip_destino[12];
        char data[30];
    };
    struct frame Benvio;
    //printf("El numero es %d",numero);
    printf("El numero es %d",numero);
    return 0;
}
