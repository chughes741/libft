# include "../libft.h"
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>

int	main(){
	/*    Initialization    */
	int error = 0;

	// atoi
	char str1[16] = "aaa123";
	char str2[16] = "321535234";

	if(atoi(str1) != ft_atoi(str1)){
		printf("atoi test 1 failed\n");
		error += 1;
	}
	if(atoi(str2) != ft_atoi(str2)) {
		printf("atoi test 2 failed\n");
		error += 1;
	}

	// bzero

	// calloc

	// isalnum

	// isalpha

	// isascii

	// isdigit

	// isprint

	// memchr

	// memcmp

	// memcpy

	// memmove

	// memset

	// strchr

	// strdup

	// strlcat

	// strlcpy

	// strlen

	// strncmp

	// strnstr

	// strrchr

	// tolower

	// toupper

	/*    Clean up    */
	if (error == 0)
		printf("All tests passed!\n");
	else
		printf("%i tests failed\n", error);
	return 0;
}
