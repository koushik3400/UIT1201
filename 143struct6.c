#include <stdio.h>
#include <string.h>
int main()
{
	struct info {
		int rNo;
		char dept[50];
		char sec;
	};
	struct student {
		struct info details;
		char name[80];
	};
	struct student s1 = {66, "Information Technology", 'B', "Sandeep"};
	printf("Name: %s, Roll no.: %d, Dept.: %s, Sec.: %c\n",
			s1.name,
            s1.details.rNo,
            s1.details.dept,
            s1.details.sec
		  );

	return(0);
}