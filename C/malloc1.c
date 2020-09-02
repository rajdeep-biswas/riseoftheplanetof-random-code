#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;
//	printf("%d\n", *p);
	p = malloc(sizeof(int));
	*p = 12;
	printf("%d\n", *p);
}