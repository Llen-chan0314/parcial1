/*
programa = ejercicio con caracteres
fecha = 11/09/2018
usuario = sebastian ariza rodriguez
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char s1 [100];
	char s2[100];
	
	printf("ingrese el primer nombre\n");
	gets(s1);
	printf("ingrese el segundo nombre\n");
	gets(s2);
	
	
	i = strcoll (s1, s2);
	if (i<= -1)
	{
		printf("%s ", s2);
		printf("%s ", s1);
	}
	
	if (i >= 1)
	{
		printf("%s ", s1);
		printf("%s ", s2);
	}
	
	
	
	
	return 0;
}

