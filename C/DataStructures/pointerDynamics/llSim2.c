#include <stdio.h>
#include <stdlib.h>

int main() {
	int capacity;
	int *numbers = NULL;

	printf("enter capacity: ");
	scanf("%d", &capacity);

	numbers = malloc(sizeof(int) * capacity);

	int size = 0;

	while(1) {
		int number;
		printf("enter number: ");
		scanf("%d", &number);

		if(number == -1)
			break;

		int found = 0;

		for(int i = 0; i < size; i++)
			if(numbers[i] == number) {
				found = 1;
				break;
			}

		if(!found && size == capacity) {
			numbers = realloc(numbers, sizeof(int) * (size + 1));
			capacity++;
		}

		numbers[size++] = number;
	}

	for(int i = 0; i < size; i++)
		printf("%d ", numbers[i]);
	printf("\n");
}