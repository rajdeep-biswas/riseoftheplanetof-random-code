// simpson's. root(1 - x^3).

#include <stdio.h>
#include <math.h>

float f(float x) {
	printf("%0.5f\n", sqrt(1 - pow(x, 3)));
	return sqrt(1 - pow(x, 3));
}

int main() {
	int i,n;
	float a, b, h, sum = 0;

	printf("enter a, b, n: ");
	scanf("%f%f%d", &a, &b, &n);

	h = (b - a) / n;

	sum = f(a) + 4 * f(a + h) + f(b);

	for(i = 3; i < n; i += 2)
		sum += 2 * (f(a + h * (i - 1))) + 4 * (f(a + h * i));

	sum *= h / 3;

	printf("\nresult: %0.4f\n", sum);
}