#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>


char *get_movie(void);
int main(void)
{
	/*malloc(1* sizeof(movielist)) is good syntax for asking for memory from 
	malloc. If it is not a string*/ 
	char **movie_list = malloc(1 * sizeof(movie_list));
	if(!movie_list){
		return EX_OSERR;
	}
		
	//while(true){
		printf("Enter a movie title: ");
		char *movie = get_movie();
		movie_list[0] = movie;
	//}

	printf("%s", movie_list[0]);

	/* we need to free these pointers so the heap knows not to continuously try
	   and allocate us memory */
	free(movie);
	free(movie_list);
}

/*Returns a newly-malloc'd section of memory that must be free()d. We in fact
get a newly allocated address because the original "movies" has not yet been 
freed() */
char *get_movie(void)
{
	char buf[64];
	fgets(buf, sizeof(buf), stdin);

	/* size_t is a type we assign to sz that is the size of buf
		-- we need first to be a pointer for malloc */
	size_t sz = strlen(buf) +1;

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
