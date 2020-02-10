#include <stdio.h>

int main()
{
	int x,y;

	for( x=10, y=20 ; x<=20 ; x++, y-- )
		printf("%2d %2d\n",x,y);

	return(0);
}

