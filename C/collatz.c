#include <stdio.h>

int count = 0;

int collatz(int n) {
	if(n == 1)
		return 0;
	else if(n % 2 == 0) {
		count++;
		return collatz(n / 2);
	}
	else {
		count++;
		return collatz(3 * n + 1);
	}
}

int main() {
	int in;
	scanf("%d", &in);
	collatz(in);
	printf("%d\n", count);
}