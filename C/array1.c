#include <stdio.h>

int main() {
	int a[100] = {0}, n = 0;

	for(int i = 0; i < 5; i++) {
		scanf("%d", &n);
		a[n]++;
	}

	for(int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
}
