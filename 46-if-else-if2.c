#include <stdio.h>

int main()
{
	char x;

	printf("Enter a character: ");
	scanf("%c",&x);
	if( x >= 'a' && x <= 'z' )
		puts("You enterd a lowercase letter");
	else if( x >= 'A' && x <= 'Z' )
		puts("You entered an uppercase letter");
	else if( x >= '0' && x <= '9' )
		puts("You entered a number");
	else if( x == ' ' )
		puts("You entered a space");
	else
		printf("You entered the %c symbol\n",x);

	return(0);
}
