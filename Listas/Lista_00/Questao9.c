#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nPeso ideal de uma mulher\n");

	float altura;
	printf("Digite a sua altura:");
	scanf("%f",&altura);

	float pesoIdeal =(62.1 * altura) - 44.7;
	printf("\nO peso ideal com %f de altura e de %f:\n", altura,pesoIdeal);

	return 0;
}
