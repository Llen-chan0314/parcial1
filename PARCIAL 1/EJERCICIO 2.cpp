/*
programa = ejercicio con numeros pares e impares
fecha = 11/09/2018
usuario = sebastian ariza rodriguez
*/
#include <iostream>
#include <stdio.h>


int main() 
{
	int n, x, par = 0, impar = 0;
    x = 0;
	do
		{
			
		
	
	printf("\ningrese un numero\n");
	scanf ("%d", &n);
	
	if (n %2 ==0)
	{
		par = par + 1;
		printf ("el numero es par ");
	}
	else 
		{
		    impar = impar + 1;
			printf ("el numero es impar ");
	}
	
	x = x + 1;
	
   }while (n != 0);
    printf("\nel numero total de pares que se ingreso fue de: %d\n", par);
	printf("\nel numero total de impares que se ingreso fue de: %d\n", impar);
		return 0;
	
}
	
