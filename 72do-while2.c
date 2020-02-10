#include <stdio.h>

int main()
{
	char x;

	x = 'a';

	do
	{
		putchar(x);
        putchar(' ');
		x++;
	}
	while( x <= 'z' );
	putchar('\n');

	return(0);
}

