#include <stdio.h>

int main()
{
	char subject[] = "Advanced Web Technologies\n";
	int i;

	i = 0;
	while( subject[i] != '\0')
	{
		putchar(subject[i]);
		i++;
	}

	return(0);
}
