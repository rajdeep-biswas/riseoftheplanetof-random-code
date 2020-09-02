#include <stdio.h>
#include <string.h>

int main() {
	char ps[100], s[10], c;

	scanf("%s", ps);
	getchar();
	scanf("%c", &c);
	scanf("%s", s);

	for(int i = 0, n = strlen(ps); i < n; i++) {
		if(ps[i] == c)
			printf("%s", s);
		else
			printf("%c", ps[i]);
	}
}