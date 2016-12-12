/*---------------------------------------------------------
	Nome: 1005 - Média 1
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Leia 2 valores de ponto flutuante de dupla 
	precisão A e B, que correspondem a 2 notas de um aluno. 
	A seguir, calcule a média do aluno, sabendo que a nota 
	A tem peso 3.5 e a nota B tem peso 7.5
---------------------------------------------------------*/

#include <stdio.h>

int main(){
	double a, b, med;
	scanf("%lf %lf", &a, &b);
	med = (a*3.5 + b*7.5)/(3.5+7.5);
	printf("MEDIA = %.5lf\n", med);
	return 0;
}
