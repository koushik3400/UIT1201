#include <stdio.h>

char* me(void)
{
    static char name[] = "R. Vinob Chander";
    return name;

}
int main()
{
    printf("My name is \"%s\".\n", me());    
}