// this is one implementation of the basicest queue where there's no going back once full

#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue() {
	if(front == SIZE - 1) {
		printf("queue full\n");
		return;
	}

	printf("enter data: ");
	scanf("%d", &queue[++front]);

	if(rear == -1)
		rear++;
}

void dequeue() {
	if(front == -1 || rear > front) {
		printf("queue empty\n");
		return;
	}

	printf("element dequeued: %d\n", queue[rear++]);
}

void display() {
	if(front == -1 || rear > front) {
		printf("queue empty\n");
		return;
	}

	for(int i = rear; i < front + 1; i++)
		printf("%d ", queue[i]);
	printf("\n");
}

int main() {
	int ch;
	
	while(1) {
		printf("1. enq\n2. deq\n3. display\nenter choice: ");
		scanf("%d", &ch);

		switch(ch) {
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
		}
	}
}