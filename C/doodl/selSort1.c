#include <stdio.h>

int main() {
	int arr[] = {87, 26, 69, 42, 12, 56, 93, 49, 81, 34};

	for(int i = 0; i < 10; i++) {
		int minIndex = i;

		for(int j = i + 1; j < 10; j++)
			if(arr[j] < arr[minIndex])
				minIndex = j;

		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

	for(int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}