#include <stdio.h>

char stack[200];
int top = -1;

void push(char c) {
	stack[++top] = c;
}

char pop() {
	return stack[top--];
}

int main() {
	char string[200];

	printf("enter the string: ");
	scanf("%s", string);

	for(int i = 0; string[i] != '\0'; i++)
		push(string[i]);

	for(int i = 0; string[i] != '\0'; i++)
		printf("%c", pop());

	printf("\n");
}