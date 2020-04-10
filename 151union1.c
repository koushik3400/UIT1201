#include <stdio.h>
#include <string.h>
int main()
{
    union student {
        int rn;
        char dept[20];
    } s1;

    s1.rn = 66;
    printf("%d\n", s1.rn);

    strcpy(s1.dept, "IT");
    printf("%s\n", s1.dept);
    
    return(0);    
}