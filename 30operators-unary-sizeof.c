#include <stdio.h>

int main()
{
	char w;
	int x;
	float y;
	double z;
	char ssn[] = "SSN College of Engineering";
	int test[20];

	printf("'w' uses %lu bytes\n",sizeof(w));
	printf("'x' uses %lu bytes\n",sizeof(x));
	printf("'y' uses %lu bytes\n",sizeof(y));
	printf("'z' uses %lu bytes\n",sizeof(z));
	printf("'ssn' uses %lu bytes\n",sizeof(ssn));
	printf("'test' uses %lu bytes\n",sizeof(test));

	return(0);
}
