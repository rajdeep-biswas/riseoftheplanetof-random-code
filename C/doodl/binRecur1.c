#include <stdio.h>

int binarySearch(int arr[], int l, int r, int s) {
	int m = (l + r) / 2 + 1;

	printf("%d\n", arr[m]);

	if(l == r)
		return -1;

	else if(arr[m] == s)
		return m;

	else if(s < arr[m])
		return binarySearch(arr, l, m - 1, s);

	else if(s > arr[m])
		return binarySearch(arr, m + 1, r, s);
}

int main() {
	int arr[] = {1, 24, 29, 34, 47, 48, 62, 76, 87, 95}, search;

	printf("search element: ");
	scanf("%d", &search);

	printf("%d\n", binarySearch(arr, 0, 10, search));
}