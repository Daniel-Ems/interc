#include <stdio.h>
#include <string.h>

int main(void)
{
	char *pc; 
	char lines [10][20];
	
	strcpy(lines[0], "mike");
	pc = lines[0];

	printf("A) sizeof(lines) = %zd\n", sizeof(lines));
	printf("B) sizeof(lines[1]) = %zd\n", sizeof(lines[1]));
	printf("C) sizeof(lines[1][3]) = %zd\n", sizeof(lines[1][3]));
	printf("D) sizeof(lines[0]) = %zd\n", sizeof(lines[0]));
	printf("E) sizeof(pc) = %zd\n", sizeof(pc));
} 
