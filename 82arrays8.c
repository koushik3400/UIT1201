#include <stdio.h>

int main()
{
	int test[2][2];
	int r,c,i;
    i=1;

	for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
			test[r][c] = i;
            i++;
        }
    }

	for(r=0;r<2;r++)
	{
        for(c=0;c<2;c++)
        {
			printf("%d ",test[r][c]);
        }
		putchar('\n');
	}

	return(0);
}

