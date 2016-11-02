#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool in_array(int *array);
int main(void)
{

	int array[3] = {1,2,3};
	printf("%s\n", in_array(array) ? "True": "False");

	
	
}

bool in_array(int *array)
{
	size_t size = sizeof(array)/4;
	size_t a = 0;
	int b = 4;
	for(a = 0; a < size; a++){
		if(b == array[a]){
		printf("It works\n");
		return true;
		}
	}
	return false;
}
	

	
