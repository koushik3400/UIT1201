#include <stdio.h>
int fact(int x)
{
	if( x == 1 )
    {
		return(x);
    }
	return( x * fact( x-1 ) );
}
int main()
{
	int x,y;
	printf("Enter a positive number: ");
	scanf("%d",&x);
	y = fact(x);
	printf("The factoral of %d! is %d\n",x,y);
	return(0);
}
