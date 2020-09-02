#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

typedef struct {
	BYTE red;
	BYTE grn;
	BYTE blu;
} RGBTRIPLE;

int main() {
	int padding = (4 - (3 * sizeof(RGBTRIPLE)) % 4) % 4;
	printf("%d\n", padding);
}
