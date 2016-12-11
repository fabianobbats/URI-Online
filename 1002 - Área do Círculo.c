/*---------------------------------------------------------
	Nome: 1002 - Área do Círculo
	Autor: Fabiano Batista
	Data: 11/12/2016
---------------------------------------------------------*/

#include <stdio.h>
#define PI 3.14159

int main(){
	double a, r;
	scanf("%lf", &r);
	a = PI*r*r;
	printf("A=%.4lf", a);
	return 0;
}
