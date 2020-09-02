#include <stdio.h>
#include <string.h>

char stack[40];
int top = -1;

void push(char c) {
	stack[++top] = c;
}

char pop() {
	printf("popped %c\n", stack[top]);
	return stack[top--];
}

int main() {
	char brex[40];
	int valid = 1;

	printf("enter bracket expression: ");
	scanf("%s", brex);

	for(int i = 0; i < strlen(brex); i++) {
		if(brex[i] == '(' || brex[i] == '{' || brex[i] == '[')
			push(brex[i]);
		else {

			if(top == -1)
				valid = 0;

			else if(brex[i] == ')' && pop() != '(' || brex[i] == '}' && pop() != '{' || brex[i] == ']' && pop() != '[')
				valid = 0;
		}
	}

	if(top != -1)
		valid = 0;

	printf("%d\n", valid);
}