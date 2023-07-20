#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nCalculo da media aritmetica de 3 notas\n");

	float nota1;
	printf("Digite a 1.o nota:");
	scanf("%f", &nota1);

	float nota2;
	printf("\nDigite a 2.o nota:");
	scanf("%f", &nota2);

	float nota3;
	printf("\nDigite a 3.o nota:");
	scanf("%f", &nota3);

	float soma = nota1 + nota2 + nota3;

	float media = soma / 3;

	printf("\nA media das notas %.2f, %.2f, %.2f e de: %.2f", nota1, nota2, nota3, media);

	return 0;
}
