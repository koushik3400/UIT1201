//(e.g.fn: uppercase to lowercase of all the chars. in a string)
#include <stdio.h>
#include <ctype.h>
void uc2lc(char *s)
{
    while (*s)
    {
        *s = tolower(*s);
        s++;
    }
}
int main()
{
    char text[80];
    fgets(text, 80, stdin);
    uc2lc(text);
    printf("%s", text);
    return(0);
}