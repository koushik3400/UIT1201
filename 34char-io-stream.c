#include <stdio.h>
int main()
{
    int x, y;
    puts("Enter two characters: ");
    x = getchar();
    y = getchar();
    putchar(x);
    putchar(y);
    putchar('\n');
    return(0);
}