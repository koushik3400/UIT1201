#include <stdio.h>
int main()
{
	char grid[3][3][3];
	int i,j,k;

	for(i=0;i<3;i++)
    {
		for(j=0;j<3;j++)
        {
			for(k=0;k<3;k++)
            {
				grid[i][j][k] = '$';
            }
        }
    }

	for(i=0;i<3;i++)
	{
		printf("%*c",i,' ');
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
            {
				printf(" %c ",grid[i][j][k]);
            }
			printf("      ");	
		}
		putchar('\n');
	}
	return(0);
}
