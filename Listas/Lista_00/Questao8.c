#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nPeso ideal de um homem\n");

	float altura;
	printf("Digite a sua altura:");
	scanf("%f",&altura);

	float pesoIdeal =(72.7 * altura) - 58;
	printf("\nO peso ideal com %f de altura e de %f:\n", altura,pesoIdeal);

	return 0;
}
