/*---------------------------------------------------------
	Nome: 1006 - Média 2
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Leia 3 valores, no caso, variáveis A, B e C, 
	que são as três notas de um aluno. A seguir, calcule a 
	média do aluno, sabendo que a nota A tem peso 2, a nota 
	B tem peso 3 e a nota C tem peso 5. 
---------------------------------------------------------*/

#include <stdio.h>

int main(){
	double a, b, c, med;
	scanf("%lf %lf %lf", &a, &b, &c);
	med = (a*2.0 + b*3.0 + c*5.0)/(2.0+3.0+5.0);
	printf("MEDIA = %.1lf\n", med);
	return 0;
}
