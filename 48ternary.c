#include <stdio.h>

int main()
{
	int x,y,z;

    puts("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	z = ( x > y )  ? x : y;
	printf("%d is larger than %d and %d\n",z,x,y);

	return(0);
}
