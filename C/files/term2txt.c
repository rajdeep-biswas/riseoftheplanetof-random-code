#include <stdio.h>
#include <string.h>

#define SIZE 256

int main() {
	FILE *fp = fopen("textFile.txt", "w");
	char buf[SIZE];

	if(!fp) {
		printf("could not create text file\n");
		return 1;
	}
	
	printf("enter text: ");
	gets(buf);

	fwrite(buf, strlen(buf), 1, fp);
}