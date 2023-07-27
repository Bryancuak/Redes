#include "stdio.h"
#include "stdlib.h"

int printv(int *v,int length){
  printf("\nV:");
  for (int i = 0; i < length; i++) {
    printf("%d ", v[i]);
  }
  return 0;
}
int eleva(int base,int expo){
 int result = 1;
  for (int i = 0; i < expo; i++) {
    result *= base;
  }
  return result;
}

int main(int argc, char *argv[]){
  int bits_prestado = atoi(argv[1]);
  int combinaciones = eleva(2,bits_prestado);
  int vector[bits_prestado] = {0};  
  printf("\ncombinaciones %d\n",combinaciones);
  printv(vector,bits_prestado);
  int k=0;
  for(int p=0;p<bits_prestado+1;p++){
    k=0;
    while(vector[k]==0){
        vector[k] = 1;
        printv(vector,bits_prestado);
        vector[k] = 0;   
      k++;
    }
    vector[k-1] = 1;
  }
printf("\n");
  return 0;
}