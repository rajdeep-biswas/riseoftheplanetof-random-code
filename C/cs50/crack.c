// char *s = crypt("bacon", "16");

#include <stdio.h>
#include <string.h>
#include <crypt.h>

int main() {
	char *salty = "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *hash = "50CcfIk1QrPr6";
	char key[6];
	int count = 0;
	char salt[] = {hash[0], hash[1], '\0'};

	int last = 0;
	for(int a1 = 0; a1 < 53; a1++)
		for(int a2 = 0; a2 < 53; a2++)
			for(int a3 = 0; a3 < 53; a3++)
				for(int a4 = 0; a4 < 53; a4++)
					for(int a5 = 0; a5 < 53; a5++) {
						key[0] = salty[a5];
						key[1] = salty[a4];
						key[2] = salty[a3];
						key[3] = salty[a2];
						key[4] = salty[a1];

						if(last == a1 && a5 == 52) {
							printf("%s : %d / 418195493\n", key, count);
							last++;
						}

						count++;

						if(!strcmp(crypt(key, salt), hash)) {
							printf("%s\n", key);
							return 1;
						}
					}


}
