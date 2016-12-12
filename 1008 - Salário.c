/*---------------------------------------------------------------------------------------
	Nome: 1008 - Salário
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Escreva um programa que leia o número de um funcionário, seu número de 
	horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário.
	A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
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
