#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3};
	int *barr = arr;

	for(int i = 0; arr[i] != '\0'; i++)
		printf("%d ", barr[i]);
	printf("\n");

	printf("size %d\n", sizeof(*barr));
}