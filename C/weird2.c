#include <stdio.h>

int main() {
	int arr[0];
	int top = -1;

	while(1) {
		printf("enter element: ");
		scanf("%d", &arr[++top]);

		printf("elements entered are -\n");
		for(int i = 0; i < top + 1; i++)
			printf("%d ", arr[i]);
		printf("\n");

		printf("current size is: %lu\n", sizeof(arr));
	}
}