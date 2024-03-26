#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int np = 0;
	float v = 0.0;
	printf("digite quantas pessoas vao no onibus (de 40 a 60 pessoas):");
	scanf("%d", &np);
	if (np == 40) {
		v = 350;
		printf("Cada passageiro vai pagar: %.2f\n", v);
	} else {
		v = 350 - 5 * (np - 40);
		printf("cada pessoa vai pagar: %.2f\n", v);
	}
	v = v * np;
	printf("Esse é o valor desse onibus: %.2f\n", v);
	return 0;
}