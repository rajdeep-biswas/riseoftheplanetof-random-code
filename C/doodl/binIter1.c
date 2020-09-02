#include <stdio.h>

int main() {
	int arr[] = {1, 24, 29, 34, 47, 48, 62, 76, 87, 95};

	int l = 0, r = 10, m, search, found = -1;

	printf("element to search: ");
	scanf("%d", &search);

	while(l <= r) {

		m = (r + l) / 2;

		printf("l: %d, r: %d, m: %d\n", l, r, m);
		printf("lookin at %d\n", arr[m]);

		if(search == arr[m]) {
			found = m;
			break;
		}

		else if(search < arr[m])
			r = m - 1;

		else
			l = m + 1;
	}

	if(found == -1)
		printf("boo hoo not found\n");
	else
		printf("element found at %d\n", found);
}