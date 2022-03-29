# include "../libft.h"
# include "../libft_bonus.h"

int	main(){
/*    Initialization    */
	int error_total = 0;

	// atoi
	int  error_atoi = 0;
	char str1[16] = "aaa123";
	char str2[16] = "321535234";

	if (atoi(str1) != ft_atoi(str1)){
		printf("atoi test 1 failed\n");
		error_total += 1;
		error_atoi += 1;
	}
	if (atoi(str2) != ft_atoi(str2)) {
		printf("atoi test 2 failed\n");
		error_total += 1;
		error_atoi += 1;
	}
	if (error_atoi > 0)
		printf("atoi failed %i test(s)\n\n", error_atoi);
	if (error_atoi = 0)
		printf("atoi passed all tests\n\n");


	// bzero
	int error_bzero = 0;
	
	if (error_bzero > 0)
		printf("bzero failed %i test(s)\n\n", error_bzero);
	if (error_bzero = 0)
		printf("bzero passed all tests\n\n");


	// calloc
	int error_calloc = 0;
	
	if (error_calloc > 0)
		printf("calloc failed %i test(s)\n\n", error_calloc);
	if (error_calloc = 0)
		printf("calloc passed all tests\n\n");


	// isalnum
	int error_isalnum = 0;
	
	if (error_isalnum > 0)
		printf("isalnum failed %i test(s)\n\n", error_isalnum);
	if (error_isalnum = 0)
		printf("isalnum passed all tests\n\n");


	// isalpha
	int error_isalpha = 0;
	
	if (error_isalpha > 0)
		printf("isalpha failed %i test(s)\n\n", error_isalpha);
	if (error_isalpha = 0)
		printf("isalpha passed all tests\n\n");


	// isascii
	int error_isascii = 0;
	
	if (error_isascii > 0)
		printf("isascii failed %i test(s)\n\n", error_isascii);
	if (error_isascii = 0)
		printf("isascii passed all tests\n\n");


	// isdigit
	int error_isdigit = 0;

	if (error_isdigit > 0)
		printf("isdigit failed %i test(s)\n\n", error_isdigit);
	if (error_isdigit = 0)
		printf("isdigit passed all tests\n\n");


	// isprint
	int error_isprint = 0;

	if (error_isprint > 0)
		printf("isprint failed %i test(s)\n\n", error_isprint);
	if (error_isprint = 0)
		printf("isprint passed all tests\n\n");


	// itoa
	int error_itoa = 0;

	if (error_itoa > 0)
		printf("itoa failed %i test(s)\n\n", error_itoa);
	if (error_itoa = 0)
		printf("itoa passed all tests\n\n");


	// memchr
	int error_memchr = 0;

	if (error_memchr > 0)
		printf("memchr failed %i test(s)\n\n", error_memchr);
	if (error_memchr = 0)
		printf("memchr passed all tests\n\n");


	// memcmp
	int error_memcmp = 0;

	if (error_memcmp > 0)
		printf("memcmp failed %i test(s)\n\n", error_memcmp);
	if (error_memcmp = 0)
		printf("memcmp passed all tests\n\n");


	// memcpy
	int error_memcpy = 0;

	if (error_memcpy > 0)
		printf("memcpy failed %i test(s)\n\n", error_memcpy);
	if (error_memcpy = 0)
		printf("memcpy passed all tests\n\n");


	// memmove
	int error_memmove = 0;

	if (error_memmove > 0)
		printf("memmove failed %i test(s)\n\n", error_memmove);
	if (error_memmove = 0)
		printf("memmove passed all tests\n\n");


	// memset
	int error_memset = 0;

	if (error_memset > 0)
		printf("memset failed %i test(s)\n\n", error_memset);
	if (error_memset = 0)
		printf("memset passed all tests\n\n");


	// putchar_fd
	int error_putchar_fd = 0;

	if (error_putchar_fd > 0)
		printf("putchar_fd failed %i test(s)\n\n", error_putchar_fd);
	if (error_putchar_fd = 0)
		printf("putchar_fd passed all tests\n\n");


	// putendl_fd
	int error_putendl_fd= 0;

	if (error_putendl_fd> 0)
		printf("putendl_fdfailed %i test(s)\n\n", error_putendl_fd);
	if (error_putendl_fd = 0)
		printf("putendl_fd passed all tests\n\n");


	// putnbr_fd
	int error_putnbr_fd = 0;

	if (error_putnbr_fd > 0)
		printf("putnbr_fdfailed %i test(s)\n\n", error_putnbr_fd);
	if (error_putnbr_fd= 0)
		printf("putnbr_fd passed all tests\n\n");


	// putstr_fd
	int error_putstr_fd = 0;

	if (error_putstr_fd> 0)
		printf("putstr_fd failed %i test(s)\n\n", error_putstr_fd);
	if (error_putstr_fd= 0)
		printf("putstr_fd passed all tests\n\n");


	// split
	int error_split= 0;

	if (error_split > 0)
		printf("split failed %i test(s)\n\n", error_split);
	if (error_split= 0)
		printf("split passed all tests\n\n");


	// strchr
	int error_strchr = 0;

	if (error_strchr > 0)
		printf("strchr failed %i test(s)\n\n", error_strchr);
	if (error_strchr = 0)
		printf("strchr passed all tests\n\n");


	// strdup
	int error_strdup = 0;

	if (error_strdup> 0)
		printf("strdup failed %i test(s)\n\n", error_strdup);
	if (error_strdup = 0)
		printf("strdup passed all tests\n\n");


	// striter
	int error_striter = 0;

	if (error_striter > 0)
		printf("striter failed %i test(s)\n\n", error_striter);
	if (error_striter = 0)
		printf("striter passed all tests\n\n");


	// strjoin
	int error_strjoin= 0;

	if (error_strjoin> 0)
		printf("strjoinfailed %i test(s)\n\n", error_strjoin);
	if (error_strjoin= 0)
		printf("strjoin passed all tests\n\n");


	// strlcat
	int error_strlcat = 0;

	if (error_strlcat> 0)
		printf("strlcat failed %i test(s)\n\n", error_strlcat);
	if (error_strlcat= 0)
		printf("strlcat passed all tests\n\n");


	// strlcpy
	int error_strlcpy= 0;

	if (error_strlcpy > 0)
		printf("strlcpy failed %i test(s)\n\n", error_strlcpy);
	if (error_strlcpy= 0)
		printf("strlcpy passed all tests\n\n");


	// strlen
	int error_strlen= 0;

	if (error_strlen > 0)
		printf("strlen failed %i test(s)\n\n", error_strlen);
	if (error_strlen= 0)
		printf("strlen passed all tests\n\n");


	// strmapi
	int error_strmapi = 0;

	if (error_strmapi > 0)
		printf("strmapi failed %i test(s)\n\n", error_strmapi);
	if (error_strmapi = 0)
		printf("strmapi passed all tests\n\n");


	// strncmp
	int error_strncmp = 0;

	if (error_strncmp> 0)
		printf("strncmpfailed %i test(s)\n\n", error_strncmp);
	if (error_strncmp = 0)
		printf("strncmp passed all tests\n\n");


	// strnstr
	int error_strnstr = 0;

	if (error_strnstr > 0)
		printf("strnstr failed %i test(s)\n\n", error_strnstr);
	if (error_strnstr = 0)
		printf("strnstr passed all tests\n\n");


	// strrchr
	int error_strrchr = 0;

	if (error_strrchr > 0)
		printf("strrchrfailed %i test(s)\n\n", error_strrchr);
	if (error_strrchr = 0)
		printf("strrchr passed all tests\n\n");


	// strtrim
	int error_strtrim = 0;

	if (error_strtrim > 0)
		printf("strtrimfailed %i test(s)\n\n", error_strtrim);
	if (error_strtrim = 0)
		printf("strtrim passed all tests\n\n");


	// substr
	int error_substr = 0;

	if (error_substr> 0)
		printf("substr failed %i test(s)\n\n", error_substr);
	if (error_substr = 0)
		printf("substr passed all tests\n\n");


	// tolower
	int error_tolower= 0;

	if (error_tolower > 0)
		printf("tolower failed %i test(s)\n\n", error_tolower);
	if (error_tolower = 0)
		printf("tolower passed all tests\n\n");


	// toupper
	int error_toupper = 0;

	if (error_toupper > 0)
		printf("toupper failed %i test(s)\n\n", error_toupper);
	if (error_toupper = 0)
		printf("toupper passed all tests\n\n");


/*    Bonuses    */
	// lstadd_back
	int error_lstadd_back = 0;

	if (error_lstadd_back > 0)
		printf("lstadd_back failed %i test(s)\n\n", error_lstadd_back);
	if (error_lstadd_back = 0)
		printf("lstadd_back passed all tests\n\n");


	// lstadd
	int error_lstadd = 0;

	if (error_lstadd > 0)
		printf("lstaddfailed %i test(s)\n\n", error_lstadd;
	if (error_lstadd = 0)
		printf("lstadd passed all tests\n\n");


	// lstclear
	int error_lstclear = 0;

	if (error_lstclear > 0)
		printf("lstclear failed %i test(s)\n\n", error_lstclear);
	if (error_lstclear = 0)
		printf("lstclear passed all tests\n\n");

	// lstdelone
	int error_lstdelone= 0;

	if (error_lstdelone > 0)
		printf("lstdelone failed %i test(s)\n\n", error_lstdelone);
	if (error_lstdelone = 0)
		printf("lstdelone passed all tests\n\n");


	// lstiter
	int error_lstiter = 0;

	if (error_lstiter > 0)
		printf("lstiter failed %i test(s)\n\n", error_lstiter);
	if (error_lstiter = 0)
		printf("lstiter passed all tests\n\n");


	// lstlast
	int error_lstlast = 0;

	if (error_lstlast > 0)
		printf("lstlast failed %i test(s)\n\n", error_lstlast);
	if (error_lstlast = 0)
		printf("lstlast passed all tests\n\n");


	// lstmap
	int error_lstmap = 0;

	if (error_lstmap > 0)
		printf("lstmap failed %i test(s)\n\n", error_lstmap);
	if (error_lstmap = 0)
		printf("lstmap passed all tests\n\n");


	// lstmap
	int error_lstmap= 0;

	if (error_lstmap> 0)
		printf("lstmap failed %i test(s)\n\n", error_lstmap);
	if (error_lstmap = 0)
		printf("lstmap passed all tests\n\n");


	// lstnew
	int error_lstnew = 0;

	if (error_lstnew > 0)
		printf("lstnew failed %i test(s)\n\n", error_lstnew);
	if (error_lstnew = 0)
		printf("lstnew passed all tests\n\n");


	// lstsize
	int error_lstsize= 0;

	if (error_lstsize > 0)
		printf("lstsizefailed %i test(s)\n\n", error_lstsize);
	if (error_lstsize = 0)
		printf("lstsize passed all tests\n\n");


/*    Clean up    */
	if (error_total == 0)
		printf("All tests passed!\n");
	else
		printf("failed %i test(s) total\n", error_total);
	return 0;
}
