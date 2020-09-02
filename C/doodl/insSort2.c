#include <stdio.h>

int main() {
	int arr[] = {985, 252, 861, 839, 174, 573, 566, 988, 919, 47, 246, 151, 283, 209, 821, 119, 315, 218, 89, 504};

	for(int i = 1; i < 20; i++) {
		int swap = arr[i];
		int j = i - 1;

		while(j >= 0 && arr[j] > swap) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = swap;
	}

	for(int i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	printf("\n");
}