

#include <stdio.h>
int main()
{
	char vehicle[3] = "Bus";
	printf("%lu\n",sizeof(vehicle));
	printf("A %s\n",vehicle);
    vehicle[3] = 'e';
    vehicle[4] = 's';
	printf("Many %s\n",vehicle);
	return(0);
}
