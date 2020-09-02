#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert() {
	if(rear == SIZE - 1) {
		printf("overflow\n");
		return;
	}

	printf("enter data: ");
	scanf("%d", &queue[++rear]);
}

void delete() {
	if(rear == front) {
		printf("underflow\n");
		return;
	}

	printf("element deleted: %d\n", queue[++front]);
}

void display() {
	if(rear == front) {
		printf("underflow\n");
		return;
	}

	for(int i = front + 1; i < rear + 1; i++)
		printf("%d ", queue[i]);
	printf("\n");
}

int main() {
	int ch;

	while(1) {
		printf("1. enq\n2. deq\n3. display\nenter choice: ");
		scanf("%d", &ch);

		switch(ch) {
			case 1: insert();
				break;
			case 2: delete();
				break;
			case 3: display();
				break;
		}
	}
}