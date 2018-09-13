/*
programa: funcion que recibe tres numeros enteros y muestra cual es el mayor de ellos
usuario: sebastian ariza 
fecha: 12/09/2018 
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
void mayor (int n1 = 0, int n2 = 0, int n3 = 0)
{
	if (n1 > n2 && n1 > n3)
	{
		printf ("el mayor es: %d", n1);
	}
	if (n2 > n1 && n2 > n3)
	{
		printf ("el mayor es: %d", n2);
	}
	if (n3 > n1 && n3 > n2)
	{
		printf ("el mayor es: %d", n3);
	}
}

int main() 
{
	
	int v1 = 0, v2 = 0, v3 = 0;
	
	printf("ingrese el primer numero\n");
	scanf ("%d", &v1);
	printf("ingrese el segundo numero\n");
	scanf ("%d", &v2);
	printf("ingrese el tercer numero\n");
	scanf ("%d", &v3);
	
	mayor(v1,v2,v3);
	
	return 0;
}

