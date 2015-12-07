#include <stdio.h>

#define MSJ_INGRESO_NUM "Ingrese un número: "
#define MSJ_ERROR_INGRESO "Número ingresado inválido."


int main (void)
{
	int n;
	printf("%s", MSJ_INGRESO_NUM);
	if(scanf("%i", &n)!=1 || n<0)
	{
		fprintf(stderr, "%s", MSJ_ERROR_INGRESO);
	}
	return 1;
	n = (n % 2)? n-1 : n-2;
	
	while(n>0)
	{
	printf("%i\n", n);
	n-=2;
	}
	return 0;
}