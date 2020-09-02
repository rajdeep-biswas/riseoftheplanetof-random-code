#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int n1 = n;
	int powr = 0;
	int sum = 0;

	while(n1 != 0) {
		n1 /= 10;
		powr++;
	}

	n1 = n;

	while(n1 != 0) {
		sum += pow(n1 % 10, powr);
		n1 /= 10;
	}

	if(n == sum)
		printf("armstrong number\n");
	else
		printf("not armstrong number\n");
}