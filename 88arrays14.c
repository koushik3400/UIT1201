#include <stdio.h>

int main()
{
	const int length  = 4;
	int x[] = { 10, 20, 30, 40 };
	int i = 40;

	if( i >= length )
		printf("Item %d is out of range\n",i);
	else
		printf("Item %d is %d\n",i,x[i]);

	return(0);
}
