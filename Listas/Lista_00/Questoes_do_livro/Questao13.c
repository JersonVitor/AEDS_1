#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nConversao de pes para outras medidas\n");

	float pes;
	printf("Digite a medida em pes: ");
	scanf("%f", &pes);

	float jardas = pes / 3;
	float polegadas = pes * 12;
	float milhas = jardas / 1760;
	

	printf("\nO valor em polegadas e de: %.2f",polegadas);
	printf("\nO valor em jardas e de: %.2f", jardas);
	printf("\nO valor em milhas e de: %f", milhas);

	return 0;
}