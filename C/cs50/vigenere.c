#include <stdio.h>
#include <string.h>

int main() {
	char arr[40];
	char key[10];

	printf("enter plaintext: ");
	gets(arr);

	printf("enter key: ");
	gets(key);

	for(int i = 0, n = strlen(key); i < n; i++)
		if(key[i] < 97)
			key[i] += 32;

	printf("ciphertext: ");

	for(int i = 0, n = strlen(arr), keySize = strlen(key), j = 0; i < n; i++)
		if(arr[i] >= 'a' && arr[i] <= 'z')
			printf("%c", 97 + (arr[i] - 97 + (key[(j++ % keySize)] - 97)) % 26);
		else if(arr[i] >= 'A' && arr[i] <= 'Z')
			printf("%c", 65 + (arr[i] - 65 + (key[(j++ % keySize)] - 97)) % 26);
		else
			printf("%c", arr[i]);

	printf("\n");
}