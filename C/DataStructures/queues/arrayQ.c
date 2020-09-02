// Second Year

#include <stdio.h>
#include <stdlib.h>

#define size 5

int ch;
int q[size];
int rear = -1;
int front = -1;

void insertQ() {
	if(rear == size - 1)
		printf("queue overflow\n");
	else {
		printf("element to insert: ");
		scanf("%d", &ch);
		rear++;
		q[rear] = ch;
	}
}

void removeQ() {
	if(front == rear)
		printf("queue underflow\n");
	else {
		front++;
		ch = q[front];
		printf("element removed: %d\n", ch);
	}
}

void displayQ() {
	if(front == rear)
		printf("queue underflow");
	else
		for(int i = 0; i <= rear; i++)
			printf("[%d]: %d, ", i, q[i]);
	printf("\n");
}

int main() {
	int choice;
	while(1) {
		printf("1. insert\n2. remove\n3. display\n4. quit\nEnter choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				insertQ();
				break;
			case 2:
				removeQ();
				break;
			case 3:
				displayQ();
				break;
			case 4:
				return 0;
		}
	}
}