#include <stdio.h>

int main() {
	int arr[] = {407, 65, 156, 471, 61, 127, 27, 203, 359, 312};
	int size = 10;
	int swap, min_idx;

	for(int i = 0; i < size; i++) {
		min_idx = i;
		for(int j = i + 1; j < size; j++) {
			if(arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		swap = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = swap;	
	}

	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}