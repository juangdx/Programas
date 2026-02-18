#ifndef TEST_H
#define TEST_H

#include <stdio.h>

// Prepara el sistema para las pruebas
#define INICIO_TEST() printf("Inicio pruebas\n")

// Imprime el resultado con un formato especial que el robot de GitHub buscará
#define PRINT_TEST(formato, valor) printf("---PASA: Salida Correcta para entrada: " formato "\n", valor)

// Finaliza las pruebas
#define FIN_TEST() printf("Se pasan todas las pruebas.\n")

#endif
