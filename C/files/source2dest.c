#include <stdio.h>
#include <string.h>

int main() {
	FILE *source = fopen("source.txt", "r");
	FILE *dest = fopen("dest.txt", "w");
	char buf[1];

	if(!source || !dest) {
		printf("problem with either (or both) of the files.\n");
		return 1;
	}

	while(fread(buf, 1, 1, source))
		fwrite(buf, 1, 1, dest);
}