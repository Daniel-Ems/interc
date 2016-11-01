#include <stdio.h>
#include <string.h>

char words[100][15];

int main(void)
{

	FILE *wordlist = fopen("wordlist", "r");
	
	int a;
	for(a =0; 
	fgets(words[][], sizeof(words), wordlist);

	printf("%s", words);
	
	int end = strlen(words);
	
	int a = 0;
	while(a < end){
		if(words[a] == ' '){
		printf("\n");
		}
		else {
		printf("%c", words[a]);
		}
		a++;
		}

}
	
	
