/*---------------------------------------------------------
	Nome: 1004 - Produto Simples
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Leia dois valores inteiros. A seguir, 
	calcule o produto entre estes dois valores e atribua 
	esta operação à variável PROD. A seguir mostre a 
	variável PROD com mensagem correspondente.
---------------------------------------------------------*/

#include <stdio.h>

int main(){
	int a, b, prod;
	scanf("%d %d", &a, &b);
	prod = a * b;
	printf("PROD = %d\n", prod);
	return 0;
}
