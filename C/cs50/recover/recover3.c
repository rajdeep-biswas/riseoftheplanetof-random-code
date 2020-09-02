// successfully recovers 24 jpegs

#include <stdio.h>
#include <stdlib.h>
#include "jpeg.h"

int checkHead(JPEGHEADER head) {
	if(head.firstByte == 255 && head.secondByte == 216 && head.thirdByte == 255 && head.lastByte >= 224 && head.lastByte <= 239)
		return 1;
	else
		return 0;
}

int main(int argc, char *argv[]) {

	if(argc != 2) {
		printf("usage: ./recover infile\n");
		return 1;
	}

	FILE *source = fopen(argv[1], "r");

	if(source == NULL) {
		fprintf(stderr, "couldn't open source file: %s\n", argv[1]);
		return 1;
	}

	JPEGHEADER head;
	int count = 0, blocksRead = 0, curBlock, i = 0;
	char fileName[9];

	do {
		curBlock = fread(&head, 1, 512, source);

		if(checkHead(head)) {
			sprintf(fileName, "%03i.jpg", i++);
			FILE *img = fopen(fileName, "w");
			do {
				fwrite(&head, 1, 512, img);
				fread(&head, 1, 512, source);
			} while(!checkHead(head));
		}
	} while(curBlock == 512);
}