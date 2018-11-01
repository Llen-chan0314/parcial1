/*
programa: registrar los productos de 4 tiendas diferentes y sumar los productos de cada tienda
usuario: sebastian ariza rodriguez
fecha de entrega: 31/10/2018
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
//definicion o declaracion de cada funcion y/o estructura 
struct producto
	{  //datos del producto
		int codigo;
		char nombre[40];
		float precio;
	};

struct tienda 
	{   //datos de las tiendas
		char tiendita[35];
		struct producto prod[4];
	};

struct ventas
	{   //datos de las ventas de los productos de cada tienda 
		int sumatoria;
		struct tienda ti[4];
	}venta[4]; 

//funcion para guardar los datos de todas las tiendas
struct producto crear ()
{
	
	for(int i = 0; i < 4; i++)
	{
		printf("Ingrese el nombre de la tienda %d: ", i + 1);
		gets(venta[i].ti[i].tiendita);
		
		for(int M = 0; M < 4; M++)
		{
			printf("\nIngrese el codigo del producto %d\n ", M + 1);
			scanf("%i",&venta[i].ti[i].prod[M].codigo);
			fflush(stdin);
			
			printf("\nIngrese la descripcion del producto\n ");
			gets(venta[i].ti[i].prod[M].nombre);
			
			printf("\nIngrese el precio del producto\n ");
			scanf("%f",&venta[i].ti[i].prod[M].precio);
			getch();
			
			venta[i].sumatoria = venta[i].sumatoria + venta[i].ti[i].prod[M].precio;
			fflush(stdin);
		}
	}
	return venta[4].ti[4].prod[4];
}

int main () //funcion principal (parte importante del programa)
{
	struct producto prod1;
	prod1 = crear();//los valores son asignados a una variable cualquiera
	fflush(stdin);
	
	for(int i = 0; i < 4; i++)//ciclo que me imprime el registro guardado anteriormente
	{
		printf("\ntienda: %s\n ",venta[i].ti[i].tiendita);
		printf("\ncodigo   nombre      precio\n ");
		for(int M = 0; M < 4; M++)
		{           
			printf("%d      %s      %.2f\n", venta[i].ti[i].prod[M].codigo, venta[i].ti[i].prod[M].nombre, venta[i].ti[i].prod[M].precio);
			fflush(stdin);
		}
		fflush(stdin);
		
		printf("\nTotal: %d\n ", venta[i].sumatoria);
	}
}
