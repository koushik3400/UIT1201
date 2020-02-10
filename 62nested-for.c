#include <stdio.h>

int main()
{
	int row;
	char column;

	for(row=1;row<=5;row++)
	{
		for(column='a';column<='e';column++)
		{
			printf("%d%c ",row,column);
		}
		putchar('\n');
	}

	return(0);
}
