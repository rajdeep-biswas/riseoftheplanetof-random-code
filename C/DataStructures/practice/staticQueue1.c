#include <stdio.h>

#define SIZE 5

int arr[SIZE];
int front = -1;
int rear = -1;

void enqueue() {
	if(rear == SIZE - 1) {
		printf("queue overflow\n");
		return;
	}
	printf("enter element: ");
	scanf("%d", &arr[++rear]);
}

void dequeue() {
	if(front == rear) {
		printf("queue underflow\n");
		return;
	}
	printf("element deleted: %d\n", arr[++front]);
}

void display() {
	if(front == rear) {
		printf("queue underflow\n");
		return;
	}
	for(int i = 0; i <= rear; i++)
		printf("[%d]: %d, ", i, arr[i]);
	printf("\n");
}

int main() {
	int ch;
	while(1) {
		printf("1. enqueue\n2. dequeue\n3. display\n4. exit\nenter choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: return 0;
		}
		printf("\n");
	}
}