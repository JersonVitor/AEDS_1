#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nCalculo do peso ideal\n");

	float altura = 1.80;

	float pesoIdeal = (72.7 * altura) - 58;

	printf("O peso ideal e: %f\n", pesoIdeal);

	return 0;
}
