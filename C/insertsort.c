#include <stdio.h>

int main() {
	int arr[] = {407, 65, 156, 471, 61, 127, 27, 203, 359, 312};
	int size = 10;
	int j, pick, smol;

	for(int i = 0; i < size; i++) {
		pick = i;
		for(j = i + 1; j < size; j++)
			if(arr[j] < arr[pick])
				pick = j;

		smol = arr[pick];
		
		while(pick > 0 && pick < arr[i]) {
			arr[pick] = arr[pick - 1];
			pick--;
		}

		arr[pick] = smol;
	}

	for(int k = 0; k < size; k++)
		printf("%d ", arr[k]);
	printf("\n");
}