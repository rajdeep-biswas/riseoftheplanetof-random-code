#include <stdio.h>

void main()
{
	int n;

	printf("Number of lines: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		for(int j = n; j > 0; j--)
		{
			if(j > i + 1)
				printf(" ");
			else
				for(int k = 0; k < (2 * i) + 1; k++)
				{
					printf("*");
					j = 0;
				}
		}
		printf("\n");
	}
}
