#include <stdio.h>
#include <time.h>
int main()
{
    time_t epoch;
    time(&epoch);
    printf("\n%s\n",ctime(&epoch));
    return(0);
}
