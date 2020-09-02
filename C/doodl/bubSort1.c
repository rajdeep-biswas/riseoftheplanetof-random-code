// this isn't exactly bubble sort. or any other sorting algorithm that i can think of. i will pose a question on stackoverflow about this
// turns out this is just selection sort with useless extra steps
// (i'm in love with stackoverflow)

#include <stdio.h>

int main() {
	int arr[] = {87, 26, 69, 42, 12, 56, 93, 49, 81, 34};

	for(int i = 0; i < 10; i++)
		for(int j = i + 1; j < 10; j++) {
			if(arr[i] > arr[j]) {
				int temp  = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

				for(int i = 0; i < 10; i++)
					printf("%d ", arr[i]);
				printf("\n");
			}
		}

	for(int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}