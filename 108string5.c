#include <stdio.h>
#include <string.h>
int main()
{
    char result[70];
    char subject[60];
    char marks[10];
    printf("Subject: ");
    fgets(subject,60,stdin);
    printf("Marks: ");
    fgets(marks,10,stdin);
    strcpy(result,subject);
    strcat(result,marks);
    printf("%s",result);
    return(0);
}