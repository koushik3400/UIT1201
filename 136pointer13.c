#include <stdio.h>
#include <stdlib.h>
int main()
{  
    const int LEN = 2048;
    char *mem;
    mem = malloc(sizeof(char) * LEN);
    if (mem != NULL)
    {
        printf("Successfully allotted %d bytes of mem. dynamically @ locn. %p !\n", LEN, mem );
    }
    else
    {
       puts("Could not allot  memory dynamically..");
       return(1);
    }
    return(0);    
}