#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>
#include <stdbool.h>


char *get_movie(void);
int main(void)
{

	size_t last_idx = 0;
	/*malloc(1* sizeof(movielist)) is good syntax for asking for memory from 
	malloc. If it is not a string*/ 
	char **movie_list = malloc((1 + last_idx) * sizeof(movie_list));
	if(!movie_list){
		return EX_OSERR;
	}
	
		movie_list[0] = NULL; 
		
	do {

	++last_idx;
		void *tmp = realloc(movie_list, (1 + last_idx) * sizeof(*movie_list));
		if(tmp) {
			movie_list = tmp;
		}else {
			break;
		}

		movie_list[last_idx] = NULL;

		printf("Enter a movie title: ");
		char *movie = get_movie();
		movie_list[last_idx-1] = movie;
		
	} while(movie_list[last_idx - 1] && strlen(movie_list[last_idx-1]) > 1);

	char **curr_movie = movie_list;
	while(*curr_movie) {
		printf("%s", *curr_movie);
		free(*curr_movie);
		++curr_movie;
	}
	printf("\n");
	/* we need to free these pointers so the heap knows not to continuously try
	   and allocate us memory */
	//free(movie);
	free(movie_list);
}

/*Returns a newly-malloc'd section of memory that must be free()d. We in fact
get a newly allocated address because the original "movies" has not yet been 
freed() */
char *get_movie(void)
{
	char buf[64];
	fgets(buf, sizeof(buf), stdin);	
	buf[strlen(buf) -1] = '\0'; 
	/*char *tmp = strtok(buf, "\n");
	if(tmp==NULL){
		printf("Error");
	}
	printf("%s\n", tmp);
	*/
	size_t sz = strlen(buf);	
	/* size_t is a type we assign to sz that is the size of buf
		-- we need first to be a pointer for malloc */
	

	/* sizeof(first) == 8, because first is just an address in the heap
	   sizeof(*first) == 1, because first is a char and a char is 1byte. */
	char *movie = malloc(sz);
	if(!movie){ 
	return NULL;
	}	
	strncpy(movie, buf, sz);
	
	return movie;
}

/* **Dynamically Allocated Memory** */

/* We are writing a program that will ask the heap for more memory depending on
inputs*/

/* ** New tools **
- malloc() - > it will take the size of a bite and return a pointer to that
free(ptr)   location in memory. The pointer must then be returned to the heap 
			with free(ptr).
			
*/
