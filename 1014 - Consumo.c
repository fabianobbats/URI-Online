/*---------------------------------------------------------------------------------------
	Nome: 1014 - Consumo
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total 
	percorrida (em Km) e o total de combust�vel gasto (em litros).
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
