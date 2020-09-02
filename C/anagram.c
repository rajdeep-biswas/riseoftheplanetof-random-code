#include <stdio.h>
#include <string.h>

int main() {
	char s1[100], s2[100];
	int sameLength = 1, flag = 1, count = 0;
	int a1[26] = {0}, a2[26] = {0};

	scanf("%s", s1);
	scanf("%s", s2);

	if(strlen(s1) != strlen(s2))
		sameLength = 0;

	if(sameLength == 0)
		flag = 0;
	else {
		for(int i = 0; i < strlen(s1); i++) {
			a1[(int)s1[i] - 97]++;
			a2[(int)s2[i] - 97]++;
		}

		for(int i = 0; i < strlen(s1); i++)
			if(a1[i] != a2[i]) {
				flag = 0;
				break;
			}

		if(flag == 1) {
			for(int i = 0; i < strlen(s1); i++)
				if(s1[i] == s2[i])
					count++;
		}
	}

	if(flag == 0)
		printf("-1");
	else
		printf("%d", count);
}