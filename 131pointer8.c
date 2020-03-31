//(e.g. fn.: shortest of two strings)
#include <stdio.h>
#include <string.h>
char *shorter(char *s1, char *s2)
{
    if (strlen(s1) < strlen(s2))
    {
        return(s1);
    }
    else
    {
        return(s2);
    }
}
int main()
{
    char s1[80];
    char s2[80];
    char *s;
    fgets(s1, 80, stdin);
    fgets(s2, 80, stdin);
    s = shorter(s1,s2);
    printf("%s", s);
    return(0);
}