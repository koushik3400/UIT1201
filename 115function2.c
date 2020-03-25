#include <stdio.h>
void add(void);
int main()
{
	add();
	return(0);
}
void add(void)
{
	int x,y;
	x = 22; y = 10;
	printf("%d + %d = %d\n",x,y,x + y);
}
