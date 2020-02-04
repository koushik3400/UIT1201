#include <stdio.h>

int main()
{
    int choice;

    printf("Ur choice (100,200,300): ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 100:
            puts("Movie");
            break;
        case 200:
            puts("Shoppping");
            break;
        case 300:
            puts("Picnic");
            break;
        default:
            puts("Invalid choice..");
    }

    return(0);
}
