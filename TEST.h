#ifndef TEST_H
#define TEST_H
#include <stdio.h>

#define INICIO_TEST() printf("Inicio pruebas\n")
#define PRINT_TEST(formato, valor) printf("---PASA: Salida Correcta para entrada: " formato "\n", valor)
#define FIN_TEST() printf("Se pasan todas las pruebas.\n")

#endif
