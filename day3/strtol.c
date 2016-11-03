#include <stdio.h>
#include <sysexits.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2){
		fprintf(stderr, "Usage: %s <number>\n", argv[0]);
		return EX_USAGE;
	}

	char *err;
	int value = strtol(argv[1], &err, 10);

		if(*err || *argv[1] == '\0'){
		printf("No integer found in %s\n", err);
		printf("However %d is a number\n", value);
	}else{
		printf("%d is a valid integer\n", value);
	}
}
		
