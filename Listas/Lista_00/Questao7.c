#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nArea do circulo\n");

	float raio;
	printf("Digite o raio do circulo:");
	scanf("%f",&raio);

	float pi = 3.1415;
	float area = pi * (raio * raio) ;
	printf("\nA area do circulo de raio %f e de: %f\n", raio, area);

	return 0;
}