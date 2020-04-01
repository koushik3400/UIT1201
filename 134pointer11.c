//pointer array (print week days)
#include <stdio.h>
int main()
{
    char *days[7] = {
       "Mon",
       "Tue",
       "Wed",
       "Thu",
       "Fri",
       "Sat",
       "Sun"
    };
    int i;
    for ( i = 0; i < 7; i++)
    {
        printf("%p\n",days[i]);
    }
    return(0);
}