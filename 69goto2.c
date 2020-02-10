#include <stdio.h>

int main()
{
	int x = 50;

repeat:
	printf("%d ",x);
	x -= 10;
	if( x == 30 )
		goto exit;
	if( x > 0 )
		goto repeat;
exit:
    putchar('\n');
	return(0);
}

