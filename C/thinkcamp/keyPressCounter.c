#include <stdio.h>

int main() {
	int count = 0;
	while(1) {
		printf("count: %d\n", count);
		if(getch() == 'e')
			break;
		else
			count++;
	}
}