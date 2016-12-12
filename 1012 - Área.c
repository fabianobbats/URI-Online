/*---------------------------------------------------------------------------------------
	Nome: 1012 - Área
	Autor: Fabiano Batista
	Data: 11/12/2016
	Descricao: Escreva um programa que leia três valores com ponto flutuante de dupla 
	precisão: A, B e C. Em seguida, calcule e mostre: 
	a) a área do triângulo retângulo que tem A por base e C por altura. 
	b) a área do círculo de raio C. (pi = 3.14159) 
	c) a área do trapézio que tem A e B por bases e C por altura. 
	d) a área do quadrado que tem lado B. 
	e) a área do retângulo que tem lados A e B. 
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
