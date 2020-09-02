// trapezoidal. 1 / (1 + x^2)

#include <stdio.h>

float f(float x) {
	printf("%0.7f\n", 1 / (1 + x * x));
	return 1 / (1 + x * x);
}

int main() {
	float a, b, h, sum = 0;
	int n, i;

	printf("enter a, b, n: ");
	scanf("%f%f%d", &a, &b, &n);

	h = (b - a) / n;

	sum = f(a) + f(b);

	for(i = 1; i < n; i++)
		sum += 2 * f(a + i * h);

	sum *= h / 2;

	printf("\nresult: %0.6f\n", sum);
}