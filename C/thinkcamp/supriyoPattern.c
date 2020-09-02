#include <stdio.h>

int main() {
	int n = 5;
	char c = 'a';

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n * 2 - 1; j++) {
			if(j < n - i - 1 || j > n + i - 1)
				printf(" ");
			else
				if(j == n - 1)
					printf("%c", c);
				else if(j < n - 1)
					printf("%c", c + ((n - j - 1) % n));
				else
					printf("%c", c + (j % n) + 1);
		}
		c++;
		printf("\n");
	}
}