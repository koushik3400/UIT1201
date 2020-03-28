#include <stdio.h>
int main()
{
    int x, *y;
    // *y = &x;
    y = &x;
    *y = 64;
    printf("This session has %d attendees\n", x); 
    return(0);
}