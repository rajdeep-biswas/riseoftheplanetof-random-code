// Second Year

#include <stdio.h>

#define max 5

int deq[max];

int left = -1;
int right = -1;

void insertRight() {
	int ele;
	if((left == 0 && right == max - 1) || (left == right + 1)) {
		printf("queue overflow\n");
		return;
	}
	if(left == -1) {
		left = 0;
		right = 0;
	}
	else {
		if(right == max - 1)
			right = 0;
		else
			right = right + 1;
	}
	printf("enter element: ");
	scanf("%d", &ele);
	deq[right] = ele;
}

void insertLeft() {
	int ele;
	if((left == 0 && right == max - 1) || (left == right + 1)) {
		printf("queue overflow\n");
		return;
	}
	if(left == -1) {
		left = 0;
		right = 0;
	}
	else {
		if(left == 0)
			left = max - 1;
		else
			left = left - 1;
	}
	printf("enter element: ");
	scanf("%d", &ele);
	deq[left] = ele;
}

void deleteLeft() {
	if(left == -1) {
		printf("queue underflow\n");
		return;
	}
	printf("element deleted: %d\n", deq[left]);
	if(left == right) {
		left = -1;
		right = -1;
	}
	else {
		if(left == max - 1)
			left = 0;
		else
			left = left + 1;
	}
}

void deleteRight() {
	if(left == -1) {
		printf("queue underflow\n");
		return;
	}
	printf("element deleted: %d\n", deq[right]);
	if(left == right) {
		left = -1;
		right = -1;
	}
	else {
		if(right == 0)
			right = max - 1;
		else
			right = right - 1;
	}
}

void display() {
	int front = left, rear = right;
	if(left == -1) {
		printf("queue underflow\n");
		return;
	}
	printf("elements are\n");
	if(front <= rear) {
		while(front <= rear) {
			printf("[%d]: %d, ", front, deq[front]);
			front++;
		}
	}
	else {
		while(front <= max - 1) {
			printf("[%d]: %d, ", front, deq[front]);
			front++;
		}
		front = 0;
		while(front <= rear) {
			printf("[%d]: %d, ", front, deq[front]);
			front++;
		}
	}
	printf("\n");
}

void inputRestricted() {
	int choice;
	while(1) {
		printf("1. insert at right\n2. delete from left\n3. delete from right\n4. display\n5. quit\nenter choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1: insertRight();
			break;
			case 2: deleteLeft();
			break;
			case 3: deleteRight();
			break;
			case 4: display();
			break;
			case 5: return;
		}
		printf("\n");
	}
}

void outputRestricted() {
	int choice;
	while(1) {
		printf("1. insert at right\n2. insert at left\n3. delete from left\n4. display\n5. quit\nenter choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1: insertRight();
			break;
			case 2: insertLeft();
			break;
			case 3: deleteLeft();
			break;
			case 4: display();
			break;
			case 5: return;
		}
		printf("\n");
	}
}

int main() {
	int choice;
	printf("1. input restricted DEQ\n2. output restricted DEQ\nenter choice: ");
	scanf("%d", &choice);
	switch(choice) {
		case 1: inputRestricted();
		break;
		case 2: outputRestricted();
		break;
	}
}