//pointer array2 (print week days)
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
    char *p;
    for ( i = 0; i < 7; i++)
    {
        p = days[i];
        while (*p)
        {
            putchar(*p);
            p++;
        }
        putchar('\n');
    }
    return(0);
}