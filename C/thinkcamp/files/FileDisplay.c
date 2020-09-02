//Program to display source code of the program in the console

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("FileDisplay.c","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
    fclose(fp);
}
