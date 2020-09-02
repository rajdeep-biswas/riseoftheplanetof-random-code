#include<stdio.h>
void main()
{
    FILE *fp;
    char buff[255];
    fp=fopen("file.txt","r");
    for(int i=1; i<=3; i++)
    {
        while(fscanf(fp,"%s",buff)!=EOF)
            {
                printf("%s",buff);
            }
            rewind(fp);
    }
    fclose(fp);
}
