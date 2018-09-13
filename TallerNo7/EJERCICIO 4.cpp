/*
programa: funcion que reciba un caracter y muestre si es una vocal o no, tambien debe decir si esta en mayuscula o minuscula
usuario: sebastian ariza 
fecha: 12/09/2018 
*/
#include<stdio.h>

void caracter(char letras)
{
	char letra;
	printf ("ingrese una letra\n");
	scanf ("%c", &letra);
	if (letra=='a' || letra=='e'  || letra=='i'  || letra=='o'  || letra=='u')
		
	{
		printf("El caracter es una vocal.\n");
		printf ("esta en minuscula\n");
	}
	else
		{
			if (letra=='A' || letra=='E'  || letra=='I'  || letra=='O'  || letra=='U')
			{
				printf("El caracter es una vocal.\n");
				printf ("esta en mayuscula\n");	
			}
			else
				{
					printf("no es una vocal\n");
				}
		}
	
}

int main()
{
	char c;
	
	for(c='A'; c<='z'; c++)
	{
		caracter(c);
	}
	
	return 0;
}
