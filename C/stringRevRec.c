#include <stdio.h>
#include <string.h>

char rev(char c) {
	c = getchar();
	if(c == '\n')
		return c;
	else {
		rev(c);
		printf("%c", c);
	}
}

int main() {
	char c;
	c = getchar();
	rev(c);
	printf("%c", c);
 }