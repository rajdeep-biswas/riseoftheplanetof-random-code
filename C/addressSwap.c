// not sure if I fully understand this yet 
// but it may be interesting to look at this code and understand why the swap doesn't work

#include <stdio.h>

void swap(int *, int *);

int main() {
	int a = 2;
	int b = 5;
	
	printf("a: %d, b: %d\n", a, b);
	swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
}

void swap(int *a, int *b) {
	int *temp = a;
	a = b;
	b = temp;
}
