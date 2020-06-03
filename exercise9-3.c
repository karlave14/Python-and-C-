#include <stdio.h>
#include <stdio.h>

int contar(int numero, int *array, int longitud);

int main()
{
	int array[10] = {3, 4, 3, 4, 3};
	int numero = 4;

	printf("Array contains %d times the number %d\n", contar(numero, array, 5), numero);

	return 0;
}

int contar(int numero, int *array, int longitud)
{
	if (longitud == 0)
		return 0;

	return (*array == numero) + contar(numero, array+1, longitud-1);
}
