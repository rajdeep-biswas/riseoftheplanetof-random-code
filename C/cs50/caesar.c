#include <stdio.h>
#include <string.h>

int main() {
	char arr[40];
	int key;

	printf("enter string: ");
	gets(arr);

	printf("enter key: ");
	scanf("%d", &key);

	for(int i = 0, n = strlen(arr); i < n; i++) 
		if(arr[i] >= 'a' && arr[i] <= 'z')
			printf("%c", 97 + ((arr[i] - 97 + key) % 26));
		else if(arr[i] >= 'A' && arr[i] <= 'Z')
			printf("%c", 65 + ((arr[i] - 65 + key) % 26));
		else
			printf("%c", arr[i]);

	printf("\n");
}