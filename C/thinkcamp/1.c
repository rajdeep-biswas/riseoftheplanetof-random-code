#include <stdio.h>

int main() {
	int n, p;
	scanf("%d", &n);

	for(int i = 2; i < n; i++) {
		p = 1;
		for(int j = 2; j < i / 2 + 1; j++)
			if(i % j == 0)
				p = 0;
		if(p == 1)
			printf("%d\n", i);
	} 
}