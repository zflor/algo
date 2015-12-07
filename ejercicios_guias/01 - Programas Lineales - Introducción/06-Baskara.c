#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* #include "lang.h" */
 
#define MSG_INGRESO "Ingrese los coeficientes del polinimio: "
#define ERR_MSG_INGRESO "Error"


int main (void)
	{
	float a, b, c, disc;
	int x, es_complejo = 0;
	printf("%s", MSG_INGRESO);
	x=scanf("%f x^2 + %f x + %f = 0", &a, &b, &c);
	
	if(x!=3)
	{
	fprintf(stderr, "%s\n", ERR_MSG_INGRESO);
	return 1;
	}
	if(!a)
		{
		if(!b)
			{
			if(!c)
				{
				printf("0 = 0\n");
				}
				else
					{
					printf("%f!=0\n", c);
					}
			}
			
			else
				{
				if(!c)
					{
					printf("R1 = %f\n", -c/b);
					}
				}
		}
		
		else
			{
			disc = b*b-4*a*c;
			es_complejo = (disc < 0)? 1 : 0;
			if (es_complejo)
				disc = -disc;
			printf("R1 = %.2f %+.2f % %c\n", -b/(2*a), sqrt(disc)/(2*a), es_complejo? 'j' : ' ');
			printf("R2=%.2f %+.2f % %c\n", -b/(2*a),-sqrt(disc)/(2*a), es_complejo? 'j' : ' ');
			}
			return 0;
		}
	