/*---------------------------------------------------------------------------------------
	Nome: 1013 - O Maior
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s 
	valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:
	MaiorAB = (a + b + abs(a - b))/2
---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
	int a, b, c, aux, maior;
	
	scanf("%d %d %d", &a, &b, &c);
	aux = (a + b + abs(a - b))/2.0;
	maior = (aux + c + abs(aux - c))/2.0;
	printf("%d eh o maior\n", maior);
	
	return 0;
}
