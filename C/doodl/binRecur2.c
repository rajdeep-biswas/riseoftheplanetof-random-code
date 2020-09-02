#include <stdio.h>

int binarySearch(int arr[], int search, int low, int high) {

	if(high < low)
		return -1;

	int mid = (high + low) / 2;

	if(search == arr[mid])
		return mid;

	else if(search < arr[mid])
		return binarySearch(arr, search, low, mid - 1);

	else
		return binarySearch(arr, search, mid + 1, high);
}

int main() {
	int arr[] = {65, 129, 304, 331, 378, 486, 586, 615, 636, 676, 764, 896, 932, 1226, 1306, 1337, 1346, 1678, 1834, 1966};

	int s;

	printf("search element: ");
	scanf("%d", &s);

	printf("%d\n", binarySearch(arr, s, 0, 20));
}