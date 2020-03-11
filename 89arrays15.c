#include <stdio.h>

int main()
{
	const int length = 4;
	int x[] = { 10, 20, 30, 40 };
	int i;

	for( i=0; i<20; i++ )
	{
		if( i >= length )
			printf("Item %d is out of bounds\n",i);
		else
			printf("Item %d is %d\n",i,x[i]);
	}

	return(0);
}
