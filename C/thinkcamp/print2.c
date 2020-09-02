#include <stdio.h>

int main() {
	int choice, a, b, result;

	printf("enter a, b: ");
	scanf("%d%d", &a, &b);

	printf("1. add\n2. subtract\n3. multiplication\n4. division\nenter choice: ");
	scanf("%d", &choice);

	switch(choice) {
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a * b;
			break;
		case 4:
			result = a / b;
			break;
		default:
			printf("wrong input\n");
	}

	printf("result: %d\n", result);
}
