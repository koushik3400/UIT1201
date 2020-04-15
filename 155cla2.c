#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        puts("Please enter your name:");
        return(1);
    }
    printf("You entered: \"%s\" \n",argv[1]);
    return(0);
}