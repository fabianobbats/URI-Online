/*---------------------------------------------------------------------------------------
	Nome: 1009 - Sal�rio com B�nus
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o 
	total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor 
	ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no 
	final do m�s, com duas casas decimais.
---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
	char nome[21];
	double tv, salf, sal;
	
	scanf("%s %lf %lf", nome, &salf, &tv);
	sal = salf + 0.15*tv;
	printf("TOTAL = R$ %.2lf\n", sal);
	
	return 0;
}
