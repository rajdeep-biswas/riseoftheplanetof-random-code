#include <stdio.h>
#include <string.h>

// strcmp() returns 0 when the strings are same i.e 0 is true here

int realityCheck(int n, char s[20]) {
	return n == 69 && strcmp(s, "sixtyNine");
}

int main() {
	printf("%d\n", realityCheck(69, "sixtyNine"));
}