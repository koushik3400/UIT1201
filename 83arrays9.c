#include <stdio.h>

int main()
{
	char tat[3][3];
	int r,c;

	
	for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
			tat[r][c] = 'O';
        }
    }

    tat[1][1] = 'X';

	
	for(r=0;r<3;r++)
	{
        for(c=0;c<3;c++)
        {
			printf("%c ",tat[r][c]);
        }
		putchar('\n');
	}

	return(0);
}

