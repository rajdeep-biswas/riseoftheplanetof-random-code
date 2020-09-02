#include <stdio.h>

int main() {
	int n = 5;
	for(int i = 0; i < n; i++) {
		int sp = n - i - 1;
		for(int j = 0; j < sp; j++)
			printf(" ");

		for(int j = 0; j < 2 * i + 1; j++)
			if(j % 2 == 0)
				printf("*");
			else
				printf(" ");

		printf("\n");
	}
}
