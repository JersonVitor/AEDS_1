#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nCalculo do aumento salarial\n");

	float salario;
	printf("Digite o seu salario:");
	scanf("%f", &salario);

	float porcentagem;
	printf("\n Digite a porcentagem do aumento:");
	scanf("%f", &porcentagem);

	float aumento = salario * porcentagem / 100;
	float novoSalario = salario + aumento;

	printf("\nO novo salario e de: R$%.2f",novoSalario);

	return 0;
}