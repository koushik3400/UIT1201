#include <stdio.h>
#include <string.h>
int main()
{
	char string[] = "Hello World";
	int size;
	size = strlen(string);
	printf("The string \"%s\" is %d characters long.\n",string, size);
	return(0);
}