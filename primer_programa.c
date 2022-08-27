#include <stdio.h>
#define MAX_SIZE 10
int main() {
char cadena[MAX_SIZE];
printf("Ingrese una cadena de caracteres \n");
fgets(cadena, MAX_SIZE, stdin);
printf("Cadena ingresada: %s \n", cadena);
return 0;
}