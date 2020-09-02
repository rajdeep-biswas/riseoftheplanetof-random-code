// simpson's. e^x.

#include <stdio.h>
#include <math.h>

#define E 2.71828

float f(float x) {
	printf("%0.5f\n", pow(E, x));
	return pow(E, x);
}

int main() {
	int i, n;
	float a, b, h, sum = 0;

	printf("enter a, b, n: ");
	scanf("%f%f%d", &a, &b, &n);

	h = (b - a) / n;

	sum = f(a) + 4 * f(a + h) + f(b);

	for(i = 3; i < n; i += 2)
		sum += 2 * f(a + (i - 1) * h) + 4 * f(a + i * h);

	sum *= h / 3;

	printf("\nresult: %0.4f\n", sum);
}