#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nPerimetro de um quadrado\n");

	float lado;
	printf("Digite o lado do quadrado:");
	scanf("%f",&lado);

	float perimetro = lado * 4;
	printf("\nO perimetro do quadrado de lado %f e de: %f\n", lado, perimetro);

	return 0;
}
