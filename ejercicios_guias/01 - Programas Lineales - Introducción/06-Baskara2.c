#include <stdio.h>
#include <math.h>

#define MSG_EXPLICACION "Calculo las soluciones de una ecuacion cuadratica de la forma ax^2+bx+c=0"
#define MSG_A "Ingrese el coeficiente a: "
#define MSG_B "Ingrese el coeficiente b: "
#define MSG_C "Ingrese el coeficiente c: "

#define MSG_RESULTADO "Las soluciones son:"

int main (void)
	{
	short int a, b, c;
	float r1, r2;
	printf("%s\n", MSG_EXPLICACION);
	printf("%s\n", MSG_A);
	scanf("%hi", & a);
	
	printf("%s\n", MSG_B);
	scanf("%hi", & b);
	
	printf("%s\n", MSG_C);
	scanf("%hi", & c);
	
	r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	
	printf("%s %f y %f", MSG_RESULTADO, r1, r2);
		
	return 0;
		
	}
	
	