#include <stdio.h>

int main() {
	int n = 5;
	for(int i = 1; i < n + 1; i++) {
		int sp = n - i;
		for(int j = 0; j < sp; j++)
			printf(" ");

		for(int j = 0; j < 2 * i - 1; j++)
			if(j % 2 == 0)
				printf("*");
			else
				printf(" ");

		printf("\n");
	}
	for(int i = n; i > 1; i--) {
		int sp = n - i;
		for(int j = 0; j < sp; j++)
			printf(" ");

		for(int j = 1; j < 2 * i - 1; j++)
			if(j % 2 == 0)
				printf("*");
			else
				printf(" ");

		printf("\n");
	}
}
