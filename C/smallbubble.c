#include <stdio.h>

int main() {
	int *arr = (int [10]){407, 65, 156, 471, 61, 127, 27, 203, 359, 312};

	int size = 10;
	int unsorted = 1, temp;
	int maxIn = 0, j = size;

	while(unsorted) {
		unsorted = 0;
		for(int i = 0; i < size - 1; i++) {
			if(arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				unsorted = 1;	
			}
		}
	}

	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}