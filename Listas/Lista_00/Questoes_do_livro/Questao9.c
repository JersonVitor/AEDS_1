#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nCalculo da area do triangulo\n");

	float base;
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);

	float altura;
	printf("\n Digite a a altura do triangulo:");
	scanf("%f", &altura);

	float area = (base * altura) / 2; 
	

	printf("\nA area do triangulo e de: %.2f",area);

	return 0;
}