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

int sumar(int num1, int num2);

//Le pido al usuario el ingreso de dos números, los sumo en una función e informo el resultado desde el main
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
	resultado = sumar(num1, num2);
	printf("Numero 1: %d - Numero 2: %d \n%d + %d = %d",num1,num2,num1,num2,resultado);

	return 0;
}

int sumar(int num1, int num2)
{
	int resultado;
	resultado = num1 + num2;

	return resultado;
}
