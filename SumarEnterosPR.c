#include <stdio.h>
#include ".vscode/test/TEST.h"

// inicia ejecución en main
int main(void)
{
    INICIO_TEST();

    int entero1 = 0; // guarda el primer numero introducido por el usuario
    int entero2 = 0; // guarda el segundo numero introducido por el usuario 
    
    printf("Dame el primer entero: "); // mensaje en pantalla
    scanf(" %d", &entero1); // lee un entero
    printf("Dame el segundo entero: "); // mensaje en pantalla
    scanf(" %d", &entero2); // lee un entero

    int suma = 0; // variable donde se guardará la suma
    suma = entero1 + entero2; // asigna el resultado de la operación a suma
    
    printf("La suma es %d\n", suma); // muestra el resultado
    
    PRINT_TEST(" %d", suma); // Guarda el resultado para verificar
    
    FIN_TEST();
    
    return 0;
} // fin de main
