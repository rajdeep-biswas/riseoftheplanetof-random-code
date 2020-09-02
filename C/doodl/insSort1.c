#include <stdio.h>

int main() {
	int arr[] = {87, 26, 69, 42, 12, 56, 93, 49, 81, 34};

	for(int i = 1; i < 10; i++) {
		int j = i - 1, min = arr[i];

		while(j >= 0 && min < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = min;
	}

	for(int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}