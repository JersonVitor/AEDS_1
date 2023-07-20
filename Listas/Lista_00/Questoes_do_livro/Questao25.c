#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nQuantidades de convites para alcancar o custo\n");

	float custo;
	printf("Digite o custo do espetaculo: ");
	scanf("%f", &custo);

	float preco;
	printf("Digite o preco do convite: ");
	scanf("%f", &preco);

	int qtd = custo / preco;


	printf("\nA quantidade de convites e de aproximadamente: %d ", qtd);

	return 0;
}