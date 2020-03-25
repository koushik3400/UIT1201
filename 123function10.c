#include <stdio.h>
#include <ctype.h>
void change(char x[]);
int main()
{
    char text[80];
    puts("Enter some text");
    fgets(text, 80, stdin);
    change(text);
    puts("Changed text: ");
    printf("%s",text);
    return(0);
}
void change(char x[])
{
    int i = 0;
    while(x[i])
    {
        x[i] = toupper(x[i]);
        if (x[i] == ' ')
        {
            x[i] = '*';
        }
        else
        {
            i++;
        }
    }
}