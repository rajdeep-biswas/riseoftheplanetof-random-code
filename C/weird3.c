#include <stdio.h>
#include <stdlib.h>

int main() {
	int *numbers = malloc(sizeof(int) * 5);

	for(int i = 0; i < 5; i++)
		printf("%u ", &numbers[i]);
	printf("\n");
}