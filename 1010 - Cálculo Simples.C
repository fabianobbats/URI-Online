/*---------------------------------------------------------------------------------------
	Nome: 1010 - C�lculo Simples
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o
	valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor 
	unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.
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
