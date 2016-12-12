/*---------------------------------------------------------------------------------------
	Nome: 1012 - �rea
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Escreva um programa que leia tr�s valores com ponto flutuante de dupla 
	precis�o: A, B e C. Em seguida, calcule e mostre: 
	a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura. 
	b) a �rea do c�rculo de raio C. (pi = 3.14159) 
	c) a �rea do trap�zio que tem A e B por bases e C por altura. 
	d) a �rea do quadrado que tem lado B. 
	e) a �rea do ret�ngulo que tem lados A e B. 
---------------------------------------------------------------------------------------*/

#include <stdio.h>
#define PI 3.14159

int main(){
	double a, b, c, atri, acir, atra, aqua, aret;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	atri = (a*c)/2.0;
	acir = PI*c*c;
	atra = ((a + b)*c)/2.0;
	aqua = b*b;
	aret = a*b;
	printf("TRIANGULO: %.3lf\n", atri);
	printf("CIRCULO: %.3lf\n", acir);
	printf("TRAPEZIO: %.3lf\n", atra);
	printf("QUADRADO: %.3lf\n", aqua);
	printf("RETANGULO: %.3lf\n", aret);
	
	return 0;
}
