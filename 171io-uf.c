//getchar, getc, putchar, putc, fgets, puts

#include <stdio.h>
int main()
{
    int x;
    x = getchar();
    getchar();
    int y;
    y = getc(stdin);
    putchar(x);
    putchar('\n');
    putc(y, stdout);
    putchar('\n');
    getchar();
    char s[20];
    fgets(s, 20, stdin);
    puts(s);
    return(0);
}