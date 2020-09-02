#include <stdio.h>

char stack[20];
int top = -1;

void push(char c) {
	stack[++top] = c;
}

char pop() {
	return stack[top--];
}

int main() {
	char brex[20];
	int valid = 1;

	printf("bracket expression: ");
	scanf("%s", brex);

	for(int i = 0; brex[i] != '\0'; i++) {
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