/*---------------------------------------------------------------------------------------
	Nome: 1008 - Sal�rio
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de 
	horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio.
	A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.
---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
	int n, ht;
	float vh;
	double sal;
	
	scanf("%d %d %f", &n, &ht, &vh);
	sal = ht*vh;
	printf("NUMBER = %d\n", n);
	printf("SALARY = U$ %.2lf\n", sal);
	return 0;
}
