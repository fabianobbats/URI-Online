/*---------------------------------------------------------------------------------------
	Nome: 1016 - Dist�ncia
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Dois carros (X e Y) partem em uma mesma dire��o. O carro X sai com 
	velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
	Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quil�metros do carro X, 
	ou seja, consegue se afastar um quil�metro a cada 2 minutos. 
	Leia a dist�ncia (em Km) e calcule quanto tempo leva (em minutos) para o carro Y 
	tomar essa dist�ncia do outro carro.
---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
	int d, t;
	
	scanf("%d", &d);
	// t = d*60/(90-60) -> t = 2*d
	t = 2*d; 
	printf("%d minutos\n", t);
	
	return 0;
}
