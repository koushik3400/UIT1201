#include <stdio.h>
#include <ctype.h>
int main()
{
	int a = 'A';
    // char a = 'A';
	printf("%d ",a);
	printf("%d ",tolower(a));
	printf("%d ",toupper(a));
	printf("%d\n",a);
	return(0);
}