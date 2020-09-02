#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Node {
	int n;
	struct Node *next;
} Node;

Node *head = NULL;

void addStart() {
	Node *newNode = malloc(sizeof(Node));

	if(!newNode) {
		printf("out of memory\n");
	}

	newNode -> next = head;

	head = newNode;
	
	printf("enter int: ");
	scanf("%d", &(newNode -> n));
}

void removeStart() {
	if(!head) {
		printf("list empty\n");
		return;
	}

	printf("element removed: %d\n", head -> n);
	free(head);
	head = head -> next;
}

void addEnd() {
	Node *newPos = head;
	Node *newNode = malloc(sizeof(Node));

	while(newPos && newPos -> next) {
		newPos = newPos -> next;
	}

	if(newPos)
		newPos -> next = newNode;
	else
		head = newNode;

	printf("enter int: ");
	scanf("%d", &(newNode -> n));
	newNode -> next = NULL;
}

void removeEnd() {
	Node *trav = head;

	if(!trav) {
		printf("list empty\n");
		return;
	}

	if(!trav -> next) {
		printf("element removed: %d\n", trav -> n);
		free(trav);
		head = NULL;
		return;
	}

	while(trav -> next -> next) {
		trav = trav -> next;
	}

	printf("element removed: %d\n", trav -> next -> n);
	free(trav -> next);
	trav -> next = NULL;
}

void reverse() {
	Node *prev, *cur, *next;
	prev = next = NULL; // hadn't assigned NULL to next inititally. but later realized it *is* good practice.
	cur = head;
	
	while(cur) {
		next = cur -> next;
		cur -> next = prev;
		prev = cur;
		cur = next;
	}

	head = prev;

	printf("list reversed\n");
}

void addOne() {
	int n = 0;
	int count = 0;

	Node *trav = head;

	while(trav) {
		n = n * 10 + trav -> n;
		trav = trav -> next;
		count++;
	}

	n += 1;

	trav = head;

	while(trav) {
		int zeros = pow(10, count - 1);
		int digit = (int)(n / zeros);

		trav -> n = digit;

		n = n - (int)(n / zeros) * zeros;
		count--;
		trav = trav -> next;
	}
}

void display() {
	Node *trav = head;

	if(!trav) {
		printf("list empty\n");
		return;
	}

	printf("LIST: ");

	while(trav) {
		printf("%d ", trav -> n);
		trav = trav -> next;
	}

	printf("\n");
}

int main() {
	int ch;
	while(1) {
		printf("1. add start\n2. remove start\n3. add end\n4. remove end\n5. display\n6. reverse\n7. add one\nenter choice: ");
		scanf("%d", &ch);

		switch(ch) {
			case 1: addStart();
				break;
			case 2: removeStart();
				break;
			case 3: addEnd();
				break;
			case 4: removeEnd();
				break;
			case 5: display();
				break;
			case 6: reverse();
				break;
			case 7: addOne();
				break;
		}
	}
}