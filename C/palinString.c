#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* string = (char*) malloc(20);
	gets(string);

	for(int i = 0, j = strlen(string) - 1; i < strlen(string) / 2; i++, j--) {
		char temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}

	printf("%s\n", string);
}