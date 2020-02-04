#include <stdio.h>

int main()
{
	int x;

	for(x=10;x<=20;x++)
	{
		printf("%d is %s\n",x,x % 2 ? "odd" : "even");
	}

	return(0);
}
