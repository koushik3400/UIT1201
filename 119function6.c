#include <stdio.h>
int retainX(void)
{
	int x = 10;
	x += 10;
	printf("Inside retain(), x = %d\n",x);
	return(x);
}
int main()
{
	int x;
	x = retainX();
	printf("Inside main(), x = %d\n",x);
	x = retainX();
	printf("Inside main(), x = %d\n",x);
	return(0);
}