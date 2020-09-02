#include <stdio.h>

int main() {
	int e;

	scanf("%d", &e);

	int n[e * 2], v[2000], enn, count = 0;

	for(int i = 0, j = 0; j < e; i += 2, j++) {
		scanf("%d", &n[i]);
		scanf("%d", &n[i + 1]);
	}

	scanf("%d", &enn);

	for(int i = 0; i < e * 2; i++)
		if(n[i] == enn) {
			if(i % 2 == 0) {
				v[count++] = n[i + 1];
			}
			else {
				v[count++] = n[i - 1];
			}
		}

	for(int i = 0; i < count; i++) {
		printf("%d\n", v[i]);
	}
}