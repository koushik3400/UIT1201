#include <stdio.h>
void fn(char c)
{
	c++;
	putchar(c);
}
int main()
{
	char c[] = "Qnnl";
	int i;
	for(i=0;i<3;i++)
    {
		fn(c[i]);
    }
	putchar('\n');
    puts(c);
	return(0);
}
