#include <stdio.h>
void charLine(char c, int s)
{
	int x;
	for( x=0; x<s; x++)
    {
		putchar(c);
    }
	putchar('\n');
}

int main()
{
	charLine('>',100);
	return(0);
}
