#include <stdio.h>
#include <time.h>
void maen(void)
{
	time_t t;
	struct tm *lt;
	time(&t);
	lt = localtime(&t);
    if ( lt->tm_hour > 1 && lt->tm_hour < 12 )
    {
        puts("Good Morning");
		return;
    }
    else if ( lt->tm_hour > 12 && lt->tm_hour < 16 )
    {
        puts("Good Afternoon");
		return;
    }
    else if ( lt->tm_hour > 16 && lt->tm_hour < 21 )
    {
        puts("Good Evening");
		return;
    }
    else
    {
        puts("Good Night");
    }
}
int main()
{
	maen();
	return(0);
}