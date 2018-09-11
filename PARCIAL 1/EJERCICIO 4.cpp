/*
programa = multiplicacion con dos numeros en punto flotante
fecha = 11/09/2018
usuario = sebastian ariza rodriguez
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
