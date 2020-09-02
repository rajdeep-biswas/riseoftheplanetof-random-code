#include <stdio.h>
#include <string.h>

int main() {
    
    int key;
    char arr[60];

    printf("enter key: ");
    scanf("%d", &key);

    printf("plaintext: ");
    gets(arr);
    gets(arr);
    
    printf("ciphertext: ");
    for(int i = 0, n = strlen(arr); i < n; i++) 
		if(arr[i] >= 'a' && arr[i] <= 'z')
			printf("%c", 'a' + ((arr[i] - 'a' + key) % 26));
		else if(arr[i] >= 'A' && arr[i] <= 'Z')
			printf("%c", 'A' + ((arr[i] - 'A' + key) % 26));
		else
			printf("%c", arr[i]);

	printf("\n");
    
}