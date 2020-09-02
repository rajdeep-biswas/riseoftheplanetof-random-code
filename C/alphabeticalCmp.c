#include <stdio.h>
#include <string.h>

// alphaCmp() returns 1, if the first string would appear before the second in alphabetical arrangement, else 0
int alphaCmp(char *s1, char *s2) {
	while(*s1 != '\0' || *s2 != '\0') {
		if(*s1 == *s2)
			s1++, s2++;
		else if(*s1 < *s2)
			return 1;
		else
			return 0;
	}
}

int main() {
	char s1[200], s2[200];

	printf("first string: ");
	scanf("%s", s1);

	printf("second string: ");
	scanf("%s", s2);

	if(alphaCmp(s1, s2))
		printf("%s\n%s\n", s1, s2);
	else
		printf("%s\n%s\n", s2, s1);
}