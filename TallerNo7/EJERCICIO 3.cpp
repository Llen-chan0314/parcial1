/*
programa: recibir un valor entero positivo desde el 1 hasta dicho valor con la excepcion de que al ingresar un valor negativo, se muestre un mensaje de error
usuario: sebastian ariza 
fecha: 12/09/2018 
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void ciclo()
{
	int i=0, v, e, x=1;
	while(i==0)
	{
		printf("Ingrese cuantos numeros desea mostrar %d\n", x);
		scanf("%d", &v);
		if(v!=abs(v))
		{
			printf("Error\nHa ingresado un valor negativo\nFin del programa\n");
			i=i+1;
		}else
			{
				printf("La cantidad de numeros en la lista %d es\n",x);
				for(e=1;e<v+1;e++)
				{
					printf("%d", e);
					printf("\n");
				}
			}
		x=x+1;
	}
	
}
int main()
{
	ciclo();
	return 0;
}
