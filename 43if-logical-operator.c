#include <stdio.h>

int main()
{
	int x = 55;

	while(x >= 40)
	{
		if( x > 45 && x < 50 )
        {
			putchar('@');
        }
		printf("%d\n",x);
		x--;
	}

	return(0);
}
