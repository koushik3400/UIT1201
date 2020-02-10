#include <stdio.h>

int main()
{
	int x;
    puts("..Typewriter..");
	puts("Type * to exit:");
    // for(;;)
	while(1)
	{
		x = getchar();
		if( x == '*')
			break;
		putchar(x);
	}

	return(0);
}
