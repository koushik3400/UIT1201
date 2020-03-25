#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char charRand(void)
{
	char rc;
	rc = rand() % 26;
	rc += 'B';
	return(rc);
}
int main()
{
	int i;
	srand( (unsigned)time(NULL) );
	for(i=0;i<3;i++)
		putchar( charRand() );
	putchar('\n');
	return(0);
}

