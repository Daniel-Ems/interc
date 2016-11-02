#include <stdio.h>
#include <string.h>


int main(void)
{
	
	
	char words[100][100];

	FILE *wordlist = fopen("wordlist", "r");
	
	
	char buf[100];
	fgets(buf, sizeof(buf), wordlist);
	char *temp = strtok(buf, " .");
	
	while(temp){
	printf("%s\n", temp);
	temp = strtok(NULL, " .");
	}

	

	//printf("%c", buf[0]);
	
	int end = strlen(buf);
	
	
	int a = 0;
	int b;
	int count;
	while(a < end){
		
		if(buf[a] == ' '){
			count++;
			words[count][b] = '\0';
			b = 0;
			printf("\n");
		}
		else {
			words[count][b] = buf[a];
			printf("buf a: %c\tcount: %d\tb: %d\n", buf[a], count, b);
			b++;
		}
			a++;
		}

	printf("%s\n", words[6]);
}
	
	
