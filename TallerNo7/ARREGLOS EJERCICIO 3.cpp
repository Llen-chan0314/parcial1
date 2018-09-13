/*
programa: como organizar N numeros en el orden de mayor a menor
usuario: sebastian ariza 
fecha: 12/09/2018 
*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>


//funcion de ingreso de numeros
void numeros(int num1[], int n){
	printf("Ingrese los numeros: \n");
	for(int i = 0; i < n; i ++){
		scanf("%d", &num1[i]);
	}
}
//funcion mayor
void mayor(int num1[], int n){
	int tempo;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if( num1[j] < num1[j+1]){
				tempo = num1[j];
				num1[j] = num1[j+1];
				num1[j+1] = tempo;  
			}	     	
		}
	} 	 
}
void result(int num1[], int n){
	printf("estos son los numeros organizados de mayor a menor: \n");
	for(int i = 0; i < n; i++){
		printf("%d\n", num1[i]);//resultado
	}
}
//funcion principal
int main() {
	int num2[100];
	int tm;
	printf("Ingrese cuantos numeros quiere agregar: ");
	scanf("%d", &tm);
	numeros(num2, tm);
	mayor(num2, tm);
	result(num2, tm);
	
	return 0;
}
