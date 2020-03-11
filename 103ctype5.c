#include <stdio.h>
#include <ctype.h>
int main()
{
	int c;
	do
	{
		c = getchar();
		if(isdigit(c))
        {
			putchar(c);
        }
	} while(c != '\n');
    putchar('\n');
	return(0);
}

