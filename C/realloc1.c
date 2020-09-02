#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5];
	printf("old size: %d\n", sizeof(arr));

	int *ptr1 = arr;
	int *ptr2;
	
	// note: none of these three would work. the first wouldn't even compile.
	// and the second and third will produce runtime errors / undefined behavior.

	arr = (int *) realloc(arr, sizeof(int) * 5);
	ptr2 = (int *) realloc(arr, sizeof(int) * 5);
	ptr2 = (int *) realloc(ptr1, sizeof(int) * 5);

	// lookup realloc() at geeksforgeeks for better understanding
}
