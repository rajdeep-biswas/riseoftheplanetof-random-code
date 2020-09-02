#include <stdio.h>

int bin(int arr[], int s, int l, int r) {
	int m = (l + r) / 2;

	if(l == r)
		return -1;

	if(arr[m] == s)
		return m;

	else if(s < arr[m])
		return bin(arr, s, l, m);

	else if(s > arr[m])
		return bin(arr, s, m + 1, r);
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	
	for(int i = -5; i < 20; i++)
		printf("%d\n", bin(arr, i, 0, 15));
}