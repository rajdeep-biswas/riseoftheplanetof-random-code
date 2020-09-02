#include <stdio.h>

int main() {
	int arr[] = {119, 252, 861, 839, 174, 573, 566, 988, 919, 47, 246, 151, 283, 209, 821, 985, 315, 218, 89, 504};
	int n = 20;

	for(int i = 1; i < n - 1; i++)
		for(int j = 0; j < n - i - 1; j++)
			if(arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

	for(int i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	printf("\n");
}