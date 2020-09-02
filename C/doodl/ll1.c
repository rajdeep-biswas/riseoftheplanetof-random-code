#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *start = NULL;

void addBeg() {
	struct node *temp = (struct node*) malloc(sizeof(struct node));

	printf("enter data: ");
	scanf("%d", &temp -> data);
	
	temp -> next = start;
	start = temp;
}

void deleteBeg() {
	struct node *q = start;

	if(q == NULL) {
		printf("empty\n");
		return;
	}

	start = q -> next;
	free(q);
}

void display() {
	struct node *q = start;

	if(q == NULL) {
		printf("empty\n");
		return;
	}

	while(q != NULL) {
		printf("%d ", q -> data);
		q = q -> next;
	}

	printf("\n");
}

int main() {
	int ch;

	while(1) {
		printf("1. addbeg\n2. deleteBeg\n3. display\nenter choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1: addBeg();
				break;
			case 2: deleteBeg();
				break;
			case 3: display();
				break;
		}
	}
}