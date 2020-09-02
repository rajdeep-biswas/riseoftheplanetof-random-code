#include <stdio.h>

int main() {
	int *arr = (int [10]){407, 65, 156, 471, 61, 127, 27, 203, 359, 312};

	int size = 10;
	int unsorted = 1, temp;
	int maxIn = 0, j;

	while(unsorted) {
		unsorted = 0;
		for(int i = 0; i < size - 1; i++) {
			if(arr[i] < arr[i + 1]) {
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

	arr = (int [10]){407, 65, 156, 471, 61, 127, 27, 203, 359, 312};		

	for(int i = 0; i < size; i++) {
	
		maxIn = i;
		for(j = i + 1; j < size; j++)
			if(arr[j] < arr[maxIn])
				maxIn = j;
	
		temp = arr[i];
		arr[i] = arr[maxIn];
		arr[maxIn] = temp;
	}

	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	arr = (int [10]){407, 65, 156, 471, 61, 127, 27, 203, 359, 312};
	j = 0;

	for(int i = 0; i < size; i++) {
		int elem = arr[i];
		j = i - 1;

		while(j >= 0 && elem > arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = elem;
	}

	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
