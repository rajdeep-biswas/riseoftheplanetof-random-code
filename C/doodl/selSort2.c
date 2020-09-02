#include <stdio.h>

int main() {
	int arr[] = {119, 252, 861, 839, 174, 573, 566, 988, 919, 47, 246, 151, 283, 209, 821, 985, 315, 218, 89, 504};

	for(int i = 0, j; i < 20; i++) {
		int min = i;

		for(j = i + 1; j < 20; j++)
			if(arr[j] < arr[min])
				min = j;

		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}

	for(int i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	printf("\n");
}