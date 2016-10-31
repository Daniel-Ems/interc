#include <stdio.h>


	union Hope{
	char array[17];
	long thing;
	};

	struct unioned{
	
	union Hope array;
	
	};

	struct Birthday{

	unsigned int day;
	unsigned int month;
	unsigned int year;

	};

	struct Man {

	char first_name[16];
	char last_name[16];
	char middle_initial[16];

	};

	
	


int main(void)
{
	struct Man Man;
	Man.middle_initial[0] = 'E';
	
	struct Birthday Birthday;
	Birthday.day = 15;

	struct unioned unioned;
	unioned.array.array[1]= 'f';
	

	printf("Your middle initial is %c\n", Man.middle_initial[0]);
	printf("Your Birthday day is %d\n", Birthday.day);
	printf("Your magic number is %c\n", unioned.array.array[1]);

}



	

