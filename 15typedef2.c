#include <stdio.h>
// typedef int twice;
int main()
{
    typedef int twice;
    twice t;
    t=2;
    printf("\n4 + 4 = %d\n",4*t);
    return(0);
}