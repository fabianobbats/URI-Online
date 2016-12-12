/*---------------------------------------------------------------------------------------
	Nome: 1009 - Salário com Bônus
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Faça um programa que leia o nome de um vendedor, o seu salário fixo e o 
	total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor 
	ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no 
	final do mês, com duas casas decimais.
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
