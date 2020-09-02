#include <stdio.h>

float rating2(int marks, float time) {
	return marks - ((int)time + ((time - (int)time) / 0.6)) * 0.1;
}

float rating(int marks, float time) {
	return marks - 1 + 1 / (time * 10);
}

int main() {
	int mx;
	float tm;

	while(1) {
		scanf("%d%f", &mx, &tm);
		printf("rating: %0.2f\n", rating2(mx, tm));
	}
}

// decimal point clock minutes to decimal minutes conversion: (tm - (int)tm) / 0.6
// clock minutes: (int)tm