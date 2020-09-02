#include <stdio.h>

#define SIZE 7

int queue[SIZE];

int front = -1;
int rear = -1;

void enqueue() {
	if((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
		printf("queue full\n");
		return;
	}

	int data;
	printf("enter data: ");
	scanf("%d", &data);

	if(front == -1) {
		queue[++rear] = data;
		front = rear;
	}

	else {
		rear = (rear + 1) % SIZE;
		queue[rear] = data;
	}
}

void dequeue() {
	if(front == -1) {
		printf("queue empty\n");
		return;
	}

	printf("element removed: %d\n", queue[front]);

	queue[front] = 0;

	if(front == rear) {
		front = rear = -1;
	}

	else {
		front = (front + 1) % SIZE;
	}
}

void display() {
	if(front == -1) {
		printf("queue empty\n");
		return;
	}

	if(front <= rear) {
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

	printf("front: %d, rear: %d\n", front, rear);
}

void viewQueue() {
	for(int i = 0; i < SIZE; i++)
		queue[i] == 0 ? printf(". ") : printf("%d ", queue[i]);
	printf("\n");
}

int main() {
	int ch;

	while(1) {
		printf("1. enq\n2. deq\n3. display\n4. viewQueue\nenter choice: ");
		scanf("%d", &ch);

		switch(ch) {
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
			case 4: viewQueue();
				break;
		}
	}
}