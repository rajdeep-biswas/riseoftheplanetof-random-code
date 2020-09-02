#include <stdio.h>

void increment(int arr[], int n) {
	for(int i = 0; i < n; i++)
		arr[i]++;
}

int main() {
	int arr[] = {0, 1, 2, 3, 4, 5};
	increment(arr, sizeof(arr) / sizeof(arr[0]));

	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d ", arr[i]);
	printf("\n");
}