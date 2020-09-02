#include <stdio.h>

int main() {
	int choice, a, b, result;

	printf("enter a, b: ");
	scanf("%d%d", &a, &b);

	printf("1. add\n2. subtract\n3. multiplication\n4. division\nenter choice: ");
	scanf("%d", &choice);

	if(choice == 1)
		result = a + b;

	else if(choice == 2)
		result = a - b;

	else if(choice == 3)
		result = a * b;

	else if(choice == 4)
		result = a / b;

	else
		printf("invalid input\n");

	printf("result: %d\n", result);
}
