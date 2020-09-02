#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int count = 0;
	char s[400];
	char s2[400] = {'0'};

	printf("enter string: ");
	gets(s);

	for(int i = 0; i < strlen(s); i++) {
		if(tolower(s[i]) <= 'z' && tolower(s[i]) >= 'a') {
			s2[count] = s[i];
			count++;
		}
	}

	s2[count] = '\0';
	
	for(int i = 0; i < strlen(s2); i++)
		printf("%c", s2[i]);
	printf("\n");
}