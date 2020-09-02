#include <stdio.h>
#include <stdlib.h>

struct node {
	int ele;
	struct node *next;
};

struct node *start = NULL;

void addBeg() {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d", &temp -> ele);

	if(start == NULL)
		temp -> next = NULL;
	else
		temp -> next = start;

	start = temp;
}

void display() {
	struct node *i;

	if(start == NULL) {
		printf("list empty\n");
		return;
	}

	i = start;

	while(i != NULL) {
		printf("%d", i -> ele);
		i = i -> next;
	}
}

void search() {
	struct node *i;

	if(start == NULL) {
		printf("empty list\n");
		return;
	}

	int n, f = 0;
	printf("enter datament to searcH: ");
	scanf("%d", &n);

	i = start;

	while(i != NULL) {
		if(i -> ele == n) {
			f = 1;
			break;
		}
		i = i -> next;
	}

	if(f == 1)
		printf("element found\n");
	else
		printf("element not found\n");
}

void delPos() {
	struct node *p, *q;
	int pos;

	if(start == NULL) {
		printf("empty list\n");
		return;
	}

	printf("enter position: ");
	scanf("%d", &pos);

	q = start;

	while(pos-- - 1) {
		q = q -> next;
		if(q == NULL)
			return;
	}

	p = q -> next;
	q -> next = p -> next;
	free(p);
}

void addAfter() {
	struct node *temp, *q;
	int pos;

	printf("enter the position: ");
	scanf("%d", &pos);

	q = start;

	while(pos--) {
		q = q -> next;
		if(q == NULL) {
			printf("invalid position\n");
			return;
		}
	}

	temp = (struct node *) malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d", &temp -> ele);
	temp -> next = q -> next;
	q -> next = temp;
}

void delBeg() {
	struct node *q;

	if(start == NULL) {
		printf("empty list\n");
		return;
	}

	q = start;
	start = start -> next;
	free(q);
}

void insert() {
	struct node *temp, *q;
	int i, d;
	temp = (struct node *)malloc(sizeof(struct node));

	printf("enter data: ");
	scanf("%d", &d);

	temp -> ele = d;

	if(start == NULL || d < start -> data) {
		temp -> next = start;
		start = temp;
	}
	else {
		q = start;
		while(q -> next != NULL && q -> next -> data < d)
			q = q -> next;
	}

	temp -> next = q -> next;
	q -> next = temp;
}