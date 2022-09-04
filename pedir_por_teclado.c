#include <conio.h>
#include <stdio.h>

int main(){
    char hola[50];
    printf("Ingresa tu nombre: ");
    scanf("%s", hola);
    printf("Tu nombre es %s.", hola);
    getch();
    return 0;
}