// ends with 7 or divisible by 7

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if(n % 10 == 7)
		printf("ends with 7\n");
	if(n % 7 == 0)
		printf("is divisible by 7\n");
}