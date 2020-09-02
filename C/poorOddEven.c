#include <stdio.h>

int main() {
	int n;

	printf("enter the number: ");
	scanf("%d", &n);

	if(n % 10 == 0 || n % 10 == 2 || n % 10 == 4 || n % 10 == 6 || n % 10 == 8)
		printf("even\n");
	else
		printf("odd\n");
}