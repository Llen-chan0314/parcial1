
/*
programa = preguntas realizadas y acertadas
fecha = 11/09/2018
usuario = sebastian ariza rodriguez
*/

#include <iostream>
#include <stdio.h>

int main() 
{
	char n;
	int porcentaje;
	int preguntasR, preguntasA;
	
	do
	{
		printf ("ingrese la cantidad de preguntas acertadas\n");
		scanf("%d", &preguntasR);
		printf ("ingrese la cantidad de preguntas realizadas\n");
		scanf("%d", &preguntasA);
		
		porcentaje = preguntasA/preguntasR;
		
		if (porcentaje >= 0.8)
		{
			printf ("alcanzo el nivel maximo");
		}
		
			if (porcentaje >= 0.65 && porcentaje < 0.8)
		{
				printf ("alcanzo el nivel medio");
				
			}
			
				if (porcentaje >= 0.4 && porcentaje < 0.65)
			{
					printf ("alcanzo el nivel regular");
					
				}
				
					if (porcentaje < 0.4)
				{
						printf ("se jodio");
					}
		
		printf ("\ndesea ingresar mas preguntas (s/n): \n");
					fflush (stdin);
					scanf("%c", &n);
	}while (n != 'n');
	
	
	
	
	return 0;
}

