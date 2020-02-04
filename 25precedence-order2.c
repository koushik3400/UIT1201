#include <stdio.h>
int main()
{
    int lecture_halls, desks, lights, fans, total;
    lecture_halls = 78;
    desks = 70;
    lights = 5;
    fans = 10;
    total = lecture_halls * (desks + lights + fans);
    printf("There are %d desks, lights, and fans in the lecture halls of this college. \n",total);
}