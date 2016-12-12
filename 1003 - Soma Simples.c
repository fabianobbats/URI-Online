/*---------------------------------------------------------
	Nome: 1003 - Soma Simples
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Leia dois valores inteiros, no caso para 
	variáveis A e B. A seguir, calcule a soma entre elas
	e atribua à variável SOMA. A seguir escrever o valor
	desta variável.
---------------------------------------------------------*/

#include <stdio.h>

int main(){
	int a, b, soma;
	scanf("%d %d", &a, &b);
	soma = a + b;
	printf("SOMA = %d\n", soma);
	return 0;
}
