/*
programa: funcion que acepte dos numeros en punto flotante, los multiplique y muestre su resultado en la pantalla
usuario: sebastian ariza 
fecha: 12/09/2018 
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>


void mult (float n1, float n2)
{
	float m;
	m = n1 * n2;
	printf ("el resultado es: %.2f\n", m);
}

int main() 
{
	float n3, n4;
	printf ("ingrese el primer numero flotante\n", n3);
	scanf ("%f", &n3);
	printf ("ingrese el segundo numero flotante\n", n4);
	scanf ("%f", &n4);
	
	mult(n3, n4);
	return 0;
}

