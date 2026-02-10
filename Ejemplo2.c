#include <stdio.h>
#include <math.h>
/*
Cálculo de la distancia euclídea entre dos puntos del plano.
*/
int main (void){
	double x1=0, y1=0, x2=0, y2=0;
	printf("Escribe las coordenadas del primer punto, separadas por un espacio, y pulsa intro despues (x1 y1): ");
	scanf("%lf %lf", &x1, &y1);
	printf("Escribe las coordenadas del segundo punto, separadas por un espacio, y pulsa intro despues (x2 y2): ");
	scanf("%lf %lf", &x2, &y2);
	double distancia = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	printf("La distancia entre los dos puntos es: %.4lf \n", distancia);
	
	return 0;
}
