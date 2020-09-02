#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	int max = 1, cur = 1;

	scanf("%s", s);

	for(int i = 1; i < strlen(s); i++) 
		if(s[i] == s[i - 1])
			if(cur >= max)
				cur++, max++;
			else
				cur++;
		else
			cur = 1;

	printf("%d", max);
}