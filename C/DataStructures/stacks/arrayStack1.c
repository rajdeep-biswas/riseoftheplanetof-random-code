// Twelfth Standard

#include <stdio.h>

#define max 5

int stack[max];
int top = 0;

void push() {
	if(top == max) {
		printf("stack overflow\n");
		return;
	}
	printf("element to push: ");
	scanf("%d", &stack[top++]);
}

void pop() {
	if(top == 0) {
		printf("stack underflow\n");
		return;
	}
	printf("element popped: %d\n", stack[--top]);
}

void display() {
	if(top == 0) {
		printf("stack underflow\n");
		return;
	}
	for(int i = top - 1; i >= 0; i--)
		printf("%d ", stack[i]);
	printf("\n");
}

int main() {
	int ch;
	while(ch != 4) {
		printf("Enter\n1. to Push\n2. to Pop\n3. to Show All\n4. Exit\n");
		scanf("%d", &ch);
		switch(ch) {
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4:
			break;
		}
	}
}