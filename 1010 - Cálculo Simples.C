/*---------------------------------------------------------------------------------------
	Nome: 1010 - Cálculo Simples
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o
	valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor 
	unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
	int n1, n2, c1, c2;
	float v1, v2, total;
	
	scanf("%d %d %f", &c1, &n1, &v1);
	scanf("%d %d %f", &c2, &n2, &v2);
	total = n1*v1 + n2*v2;
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	
	return 0;
}
