#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert() {
	if(front == 0 && rear == SIZE - 1 || front == rear + 1) {
		printf("overflow\n");
		return;
	}

	if(front == -1) {
		front = rear = 0;
	}

	else {
		if(rear == SIZE - 1)
			rear = 0;
		else
			rear++;
	}

	printf("enter element: ");
	scanf("%d", &queue[rear]);
}

void delete() {
	if(front == -1) {
		printf("underflow\n");
		return;
	}

	printf("element deleted: %d\n", queue[front]);

	if(front == rear) {
		front = rear = -1;
	}

	else {
		if(front == SIZE - 1)
			front = 0;

		else
			front++;
	}	
}

void display() {
	if(front == -1) {
		printf("underflow\n");
		return;
	}

	if(rear >= front) {
		for(int i = front; i < rear + 1; i++)
			printf("%d ", queue[i]);
		printf("\n");
	}

	else {
		for(int i = front; i < SIZE; i++)
			printf("%d ", queue[i]);
		for(int i = 0; i < rear + 1; i++)
			printf("%d ", queue[i]);
		printf("\n");
	}
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