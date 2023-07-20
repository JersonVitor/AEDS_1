#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("\nArea do circulo de raio 1\n");

	int raio = 1;
	float pi = 3.1415;

	float area =  pi * (raio * raio);

	printf("A area do circulo e: %f\n", area);
    return 0;
}