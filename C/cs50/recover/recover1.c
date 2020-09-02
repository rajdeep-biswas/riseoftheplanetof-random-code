// the traversal works. positively reading 512 bytes each. stopping at EOF.

#include <stdio.h>
#include <stdlib.h>
#include "jpeg.h"

int main(int argc, char *argv[]) {

	if(argc != 2) {
		printf("usage: ./recover infile\n");
		return 1;
	}

	FILE *source = fopen(argv[1], "r");
	FILE *img = fopen("newImage.jpg", "w");

	if(source == NULL) {
		fprintf(stderr, "couldn't open source file: %s\n", argv[1]);
		return 1;
	}

	JPEGHEADER head;
	int count = 0, blocksRead = 0, curBlock;

	do {
		curBlock = fread(&head, 1, 512, source);
		blocksRead += curBlock / 512;

		if(head.firstByte == 255 && head.secondByte == 216 && head.thirdByte == 255 && head.lastByte >= 224 && head.lastByte <= 239)
			printf("jpegs found: %d, blocks traversed: %d\n", ++count, blocksRead);
	} while(curBlock == 512);
	
}