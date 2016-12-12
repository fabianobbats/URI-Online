/*---------------------------------------------------------------------------------------
	Nome: 1011 - Esfera
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Faça um programa que calcule e mostre o volume de uma esfera sendo 
	fornecido o valor de seu raio (R). A fórmula para calcular o volume é: 
	(4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
---------------------------------------------------------------------------------------*/

#include <stdio.h>
#define PI 3.14159

int main(){
	int r;
	double vol;
	
	scanf("%d", &r);
	vol = (4.0*PI*r*r*r)/3.0;
	printf("VOLUME = %.3lf\n", vol);
	
	return 0;
}
