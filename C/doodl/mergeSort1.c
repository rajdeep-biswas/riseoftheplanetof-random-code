#include <stdio.h>

void merge(int left[], int right[], int arr[]) {

	int sizeL = sizeof(left) / sizeof(left[0]);
	int sizeR = sizeof(right) / sizeof(left[0]);

	int i, j, k;
	i = j = k = 0;

	while(i < sizeL && j < sizeR) {
		if(left[i] < right[j]) {
			arr[k] = left[i];
			i++;
		}
		else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}

	while(i < sizeL) {
		arr[k] = left[i];
		k++;
		i++;
	}

	while(j < sizeR) {
		arr[k] = left[j];
		k++;
		j++;
	}
}

void mergeSort(int arr[]) {

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("size of array: %d\n", size);

	if(size < 2) {
		return;
	}

	int mid = size / 2;

	int left[mid];
	int right[size - mid];

	for(int i = 0; i < mid; i++)
		left[i] = arr[i];

	for(int i = mid; i < size; i++)
		right[i - mid] = arr[i];

	mergeSort(left);
	mergeSort(right);
	merge(left, right, arr);
}

int main() {
	int arr[] = {92, 37, 53, 10, 74, 20, 95, 31, 79, 24};
	mergeSort(arr);

	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d ", arr[i]);
	printf("\n");
}