//Correlación
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	printf("Vamos a calcular el coeficiente de correlacion de unos pares de puntos (xi, yi)\n");
	printf("===============================================================================\n\n");
	
	int n; //Declaramos la variable número de puntos que se introducirán.
	int x, y; //Declaramos las variables "coordenadas de cada punto".
	int suma_xi=0, suma_yi=0, suma_xiyi=0, suma_xi2=0, suma_yi2=0; //Declaramos las variables de las distintas sumas que vamos a utilizar.
	
	do {
	printf("Cuantos pares de puntos vamos a introducir? ");
	scanf("%d", &n);
	}
	while (n<=0);
	
	
	for(int cont=1; cont<=n; cont++){
		printf("Intruduce las coordenadas (x,y) del punto %d separadas por un espacio: ", cont);
		scanf(" %d %d", &x, &y);
		//Ahora vamos acumulando las diferentes sumas:
		suma_xi = suma_xi + x; // o suma_xi +=x; Lo mismo para las demás sumas.
		suma_yi = suma_yi + y;
		suma_xiyi = suma_xiyi + x*y;
		suma_xi2 = suma_xi2 + x*x;
		suma_yi2 = suma_yi2 + y*y;
	}
	
	double media_x, media_y, varianza_x, varianza_y, covarianza, correlacion;//Declaramos variables. 
	
	/* En las siguientes definiciones, aunque hayamos declarado previamente las variables como double, como media_x = suma_xi/n es
	un cociente entre enteros, entonces devolverá el resultado de la división entera, es decir, devolverá un entero.
	Para que devuelva la división decimal, o defnimos previamente como double (o float) alguna de las variables que intervienen en la división
	suma_xi/n, o lo hacemos directamente al definir las variables, como hemos hecho. Así devolverá el resultado de una división decimal y no entera. */ 
	
	media_x = double (suma_xi)/n; 
	media_y = double (suma_yi)/n;
	varianza_x = double (suma_xi2)/n - media_x*media_x;
	varianza_y = double (suma_yi2)/n - media_y*media_y;
	covarianza = double (suma_xiyi)/n - media_x*media_y;
	correlacion = covarianza/(sqrt(varianza_x)*sqrt(varianza_y));
	
	printf("Suma xi = %d   Suma yi = %d   Suma xi2 = %d   Suma yi2 = %d   Suma xiyi = %d\n", suma_xi, suma_yi, suma_xi2, suma_yi2, suma_xiyi);
	printf("Media de x = %.4lf  Media de y = %.4lf  Covarianza = %.4lf\n", media_x, media_y, covarianza);
	printf("Varianza de x = %.4lf  Varianza de y = %.4lf\n", varianza_x, varianza_y);
	
	if(varianza_x==0 ||varianza_y==0)
		printf("No podemos calcular el coeficiente de correlacion por tener denominador 0");
	else
		printf("Coeficiente de correlacion = %.4lf", correlacion);
		
	return 0;
}
