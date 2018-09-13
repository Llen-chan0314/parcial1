/*
programa: ingresar un nombre y mostrar la cantidad de vocales que tiene
usuario: sebastian ariza 
fecha: 12/09/2018 
*/
#include <iostream> 
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 

char frase[40]; 
int n,m; 

int main(){ 
	
	
	printf("ingrese una frase: "); 
	gets(frase);
	
	
	for(n = 0; n < 40; n++)
		{ 
		switch (frase[n])
			{ 
		case 'a': m = m + 1; 
		break; 
		case 'e': m = m + 1;  
		break; 
		case 'i': m = m + 1;  
		break; 
		case 'o': m = m + 1; 
		break; 
		case 'u': m = m + 1; 
		break; 
		} 
	} 
	
	printf("la cantidad de vocales que tiene la frase es %d\n",m); 
	
	getch(); 
	 
	return 0; 
}
