/*
programa: convertir el numero de segundos ingresado en un numero equivalente de horas, minutos y segundos
usuario: sebastian ariza 
fecha: 12/09/2018 
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include<string.h>

void tiempo(int segtotal)
	
{
	int hora=0, min=0, seg=0, sgt = segtotal;
    if(segtotal%3600==0)
{
	
	hora=segtotal/3600;
	
   }
	else
	{
		hora=segtotal/3600;
		segtotal=segtotal%3600;
		if(segtotal%60==0)
		{
			min=segtotal/60;
		}
		else
			{
				min=segtotal/60;
				segtotal=segtotal%60;
				seg=segtotal;
			}
	}
	printf("\n%d segundos equivalen a  %dh - %dmin - %ds",sgt, hora, min, seg);
}

int main() 
{
	int segtotal, horas, minutos, segundos;
    printf ("ingrese la cantidad de segundos: ");
    scanf ("%d", &segtotal);
    tiempo(segtotal);
	getch();
	return 0;	
}
