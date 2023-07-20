#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nConversao de graus celsius para farenheit\n");

	float celsius = 37.777777;

	float farenheit = celsius * 1.8 + 32;

	printf("A temperatura em farenheit e de: %f\n", farenheit);
    return 0;
}
