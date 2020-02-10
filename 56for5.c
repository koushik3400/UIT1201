#include <stdio.h>

int main()
{
	int x,y;

	x = 10;
	y = 20;
	for(; x<=20 ;)
	{
		printf("%d %d\n",x,y);
		x++;
        y--;
	}
	return(0);
}

