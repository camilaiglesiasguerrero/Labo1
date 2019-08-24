/*
 ============================================================================
 Name        : clase1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int num2, int* resultado);

/**
 * Le pido al usuario el ingreso de dos n�meros. Si ambos son positivos, los sumo en una funci�n
 * e informo que pude realizar el c�lculo correctamente y el resultado
 * */
int main(void) {
	int num1;
	int num2;
	int resultado;

	printf("Ingrese un numero: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Ingrese otro numero: ");
	fflush(stdout);
	scanf("%d",&num2);
	if(sumar(num1, num2, &resultado) == 0)
	{
		printf("Ambos n�meros son positivos\n");
		printf("Numero 1: %d - Numero 2: %d \n%d + %d = %d",num1,num2,num1,num2,resultado);
	}
	else
	{
		printf("Error. Ambos n�meros deben ser positivos");
	}

	return 0;
}

int sumar(int num1, int num2, int* resultado)
{
	int retorno;
	if(num1 > 0 && num2 > 0)
	{
		*resultado = num1 + num2;
		retorno = 0;
	}
	else
	{
		retorno = -1;
	}

	return retorno;
}
