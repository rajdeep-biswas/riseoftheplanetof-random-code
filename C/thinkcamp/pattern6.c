#include <stdio.h>

int main() {
	int n = 5;

	for(int i = n; i > -1; i--) {
		for(int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
	for(int i = 1; i < n + 1; i++) {
		for(int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
}