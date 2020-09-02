#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for(int i = 1; i < n * 2; i++) {
		for(int j = 1; j < n * 2; j++) {
			if(abs(i - n) >= abs(j - n))
				printf("%d ", abs(i - n) + 1);
			else
				printf("%d ", abs(j - n) + 1);
		}
		printf("\n");
	}
}
