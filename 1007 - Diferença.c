/*---------------------------------------------------------
	Nome: 1007 - Diferen�a
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Leia quatro valores inteiros A, B, C e D. 
	A seguir, calcule e mostre a diferen�a do produto de 
	A e B pelo produto de C e D segundo a f�rmula: 
	DIFERENCA = (A * B - C * D) 
---------------------------------------------------------*/

#include <stdio.h>

int main(){
	int a, b, c, d, dif;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	dif = a*b - c*d;
	printf("DIFERENCA = %d\n", dif);
	return 0;
}
