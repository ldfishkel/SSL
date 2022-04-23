#include <stdio.h>
#include <stdlib.h>

int main(char* args) {

    char nombre[15];
    int edad;

    printf("Ingrese su Nombre (max 15 chars):");
    
    scanf("%s", &nombre);
    
    printf("Bievenido a SSL %s, Ingrese su Edad:", nombre);

    scanf("%d", &edad);

    if (edad > 20)
        printf("Ya esta grandecito para hacer scripts como este, vaya a operativos!");
    else
        printf("Bueno es muy joven, proxima clase vamos a ver el switch - case va a estar muy bueno!");

    return 0;
}