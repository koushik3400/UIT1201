#include <stdio.h>

int main()
{
	int x;

	x = 9;
	while(1)
	{
		x++;
		printf("%d\n",x);
		if( x < 15 )
			continue;
		x++;
		if( x > 20 )
			break;
	}

	return(0);
}
