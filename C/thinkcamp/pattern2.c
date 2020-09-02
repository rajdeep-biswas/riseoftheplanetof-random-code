#include <stdio.h>

int main() {
	int n = 10;
	int print = 1;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i + 1; j++)
			printf("%0d ", print++);
		printf("\n");
	}
}