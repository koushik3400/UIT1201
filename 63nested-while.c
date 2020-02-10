#include <stdio.h>

int main()
{
	int row;
	char column;

	row = 1;
	while(row<=5)
	{
		column = 'v';
		while(column<='z')
		{
			printf("%d%c ",row,column);
			column++;
		}
		putchar('\n');
		row++;
	}

	return(0);
}
