#include <stdio.h>

int main() {
	int arr[] = {65, 129, 304, 331, 378, 486, 586, 615, 636, 676, 764, 896, 932, 1226, 1306, 1337, 1346, 1678, 1834, 1966};

	int low = 0, high = 20, mid, search, found = -1;

	printf("search element: ");
	scanf("%d", &search);

	while(low <= high) {
		mid = (low + high) / 2;

		printf("%d\n", arr[mid]);

		if(arr[mid] == search) {
			found = mid;
			break;
		}

		else if(search < arr[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}

	printf("%d\n", found);
}