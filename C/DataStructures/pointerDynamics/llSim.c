#include <stdio.h>

int main() {

	int capacity;
	printf("enter capacity: ");
	scanf("%d", &capacity);

	int numbers[capacity];

	int size = 0;
	while(size < capacity) {

		int number;
		printf("enter number: ");
		scanf("%d", &number);

		int found = 0;
		for(int i = 0; i < size; i++) {
			if(numbers[i] == number) {
				found = 1;
				break;
			}
		}

		if(!found) {
			numbers[size] = number;
			size++;
		}
	}

	for(int i = 0; i < size; i++)
		printf("%d ", numbers[i]);
	printf("\n");
}