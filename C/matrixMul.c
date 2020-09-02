#include <stdio.h>

int main() {
	int arr1[][3] = {{1, 2, 3}, {4, 5, 6}};
	int arr2[][2] = {{1, 2}, {2, 3}, {3, 4}};

	int r1 = 2, r2 = 3, c1 = 3, c2 = 2;

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			int sum = 0;
			for(int k = 0; k < 3; k++) {
				sum += arr1[i][k] * arr2[k][j];
			}
			printf("%d ", sum);
		}
		printf("\n");
	}
}