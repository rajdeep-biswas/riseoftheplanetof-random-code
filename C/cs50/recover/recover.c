#include <stdio.h>
#include "jpeg.h"

int checkHead(JPEGHEADER head) {
	if(head.firstByte == 0xff && head.secondByte == 0xd8 && head.thirdByte == 0xff && head.lastByte >= 0xe0 && head.lastByte <= 0xef)
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
		return 2;
	}

	JPEGHEADER head;
	fread(&head, 1, sizeof(JPEGHEADER), source);

	int count = 0, blocksRead = 0, curBlock, i = 0;
	char fileName[9];

	do {
		if(checkHead(head)) {
			sprintf(fileName, "%03i.jpg", i++);
			FILE *img = fopen(fileName, "w");
			do {
				fwrite(&head, 1, sizeof(JPEGHEADER), img);
				curBlock = fread(&head, 1, sizeof(JPEGHEADER), source);
			} while(!checkHead(head) && curBlock == sizeof(JPEGHEADER));
		}
		else
			curBlock = fread(&head, 1, sizeof(JPEGHEADER), source);
	} while(curBlock == sizeof(JPEGHEADER));

	return 0;
}