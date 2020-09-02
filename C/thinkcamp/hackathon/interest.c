#include <stdio.h>
#include <math.h>

void simple() {

}

void compound() {
	float p, r, n, t, a;
	printf("enter principal, rate, period, interval: ");
	scanf("%f%f%f%f", &p, &r, &n, &t);
	a = p * pow((1 + (r / n)), n * t);
	printf("compound interest: %f\n", a);
}

int main() {
	int ch;

	printf("1. simple\n2. compound\nenter choice: ");
	scanf("%d", &ch);

	if(ch == 1) {
		simple();
	}

	else if(ch == 2) {
		compound();
	}

	else {
		printf("wrong choice\n");
	}
}