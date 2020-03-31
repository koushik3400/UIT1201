//(e.g.: encode)
#include <stdio.h>
#include <ctype.h>
char *encode(char *pt)
{
    static char ct[80];
    int i = 0;
    while(*pt)
    {
        if (isalpha(*pt))
        {
            ct[i] = *pt + 5;
        }
        else
        {
            ct[i] = *pt;
        }
        i++;
        pt++;
    }
return(ct);
}
int main()
{
    char text[80];
    char *result;
    fgets(text, 80, stdin);
    result = encode(text);
    printf("%s", result);
}
