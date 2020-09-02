#include <stdio.h>
#include <string.h>

char stack[20];
int top = -1;

void push(char c) {
	stack[++top] = c;
}

char pop() {
	return stack[top--];
}

int main() {
	char postfix[20];
	int top, topm1;

	printf("enter postfix expression: ");
	scanf("%s", postfix);

	for(int i = 0; i < strlen(postfix); i++) {

		for(int j = top; j > -1; j--)
			printf("%c\n", stack[j]);

		if(postfix[i] != '+' && postfix[i] != '-' && postfix[i] != '*' && postfix[i] != '/')
			push(postfix[i] - '0');
		else {
			top = pop();
			topm1 = pop();
			
			if(postfix[i] == '+')
				push(top + topm1);

			else if(postfix[i] == '-')
				push(topm1 - top);

			else if(postfix[i] == '*')
				push(top * topm1);

			else
				push(topm1 / top);
		}
	}

	printf("%d\n", pop());
}