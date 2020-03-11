#include <stdio.h>
void fn(char c[])
{
	int i;
	for(i=0;i<5;i++)
	{
		c[i]++;
		putchar(c[i]);
	}
}
int main()
{
	char d[] = "Qnnl";
	fn(d);
	putchar('\n');
    puts(d);
	return(0);
}
