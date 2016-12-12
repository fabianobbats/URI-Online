/*---------------------------------------------------------------------------------------
	Nome: 1014 - Consumo
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Calcule o consumo médio de um automóvel sendo fornecidos a distância total 
	percorrida (em Km) e o total de combustível gasto (em litros).
---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
	int x;
	float y;
	double cmed;
	
	scanf("%d %f", &x, &y);
	cmed = x/y; 
	printf("%.3lf km/l\n", cmed);
	
	return 0;
}
