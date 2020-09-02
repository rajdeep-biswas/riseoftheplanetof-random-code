#include <stdio.h>
#include <string.h>

struct Band
{
    char name[40];
    int members;
    char genre[10];
    int year;
};

int main()
{
    struct Band bfmv;
    struct Band *jason;
    jason = &bfmv;

    strcpy(jason->name, "Bullet for My Valentine");
    strcpy(jason->genre, "Metalcore");
    (*jason).members = 4;
    (*jason).year = 1998;

    printf("%s\n%d members\n%s\nSince %d\n", (*jason).name,
    	(*jason).members, (*jason).genre, (*jason).year);
}
