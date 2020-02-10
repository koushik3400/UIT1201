#include <stdio.h>

int main()
{
	int x = 50;

repeat:
	printf("%d ",x);
	x -= 10;
	if( x > 0 )
    {
		goto repeat;
    }
    putchar('\n');
	return(0);
}

