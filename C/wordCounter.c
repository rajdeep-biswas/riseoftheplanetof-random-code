#include <stdio.h>
#include <string.h>

int wordCount(char curC, char preC) {
    if((preC == ' ' || preC == '\t' || preC == '.' || preC == ',' || preC == ';') && (((int)curC > 64 && (int)curC < 91) || (((int)curC > 96 && (int)curC < 123))))
        return 1;
    else
        return 0;
}

int main() {
    char s[400];
    int count = 1;
    printf("enter sentence: ");
    gets(s);

    for(int i = 1; i < strlen(s); i++) {
        if(wordCount(s[i], s[i - 1]))
            count++;
    }

    printf("words: %d\n", count);
}