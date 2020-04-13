#include <stdio.h>
int main(int argc, char *argv[])
{
    // printf("%d: %s\n", argc, argv[0]);
    int i;
    for ( i = 0; i < argc; i++)
    {
        printf("%d: %s\n",i+1, argv[i]);
    }
    return (0);
}