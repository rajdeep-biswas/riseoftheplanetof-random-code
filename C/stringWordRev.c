#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[400];
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	gets(s);
        fgets(s, 400, stdin);

        int marker = 1, markers[400] = {0};

        for(int i = 0; i < strlen(s); i++) {
            if(s[i] == ' ')
                markers[marker++] = i + 1;
        }

        for(int i = marker - 1; i > -1; i--) {
            for(int j = markers[i]; tolower(s[j]) >= 'a' && tolower(s[j] <= 'z') || (s[j] == '.' || s[j] == ','); j++)
                printf("%c", s[j]);
            if(i != 0)
                printf(" ");
        }
    }
}