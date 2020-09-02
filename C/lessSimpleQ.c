// this is the dynamic modification where there IS going back even after it is full once
// observations: this implementation where rear and front are 0 initially make everything much easier

#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int rear = 0;
int front = 0;

void enqueue() {
	if(rear == SIZE) {
		printf("queue full\n");
		return;
	}

	printf("enter data: ");
	scanf("%d", &queue[rear++]);
}

void dequeue() {
	if(rear == front) {
		printf("queue empty\n");
		return;
	}

	printf("element dequeued: %d\n", queue[front]);

	for(int i = 0; i < rear; i++) {
		queue[i] = queue[i + 1];
	}

	rear--;
}

void display() {
	if(rear == front) {
		printf("queue empty\n");
		return;
	}

	for(int i = front; i < rear; i++)
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