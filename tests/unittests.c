# include "../libft.h"
# include "../libft_bonus.h"
# include "testutils.c"

int	main() {
/*			Setup			*/
/*			atoi			*/
	// Invalid inputs
	char str1[32] = "aaa123";
	int_expect_eq(atoi(str1), ft_atoi(str1));
	char str2[32] = " 123";
	int_expect_eq(atoi(str2), ft_atoi(str2));

	// Valid input
	char str3[32] = "321535234";
	int_expect_eq(atoi(str3), ft_atoi(str3));
	char str4[32] = "-321535234";
	int_expect_eq(atoi(str4), ft_atoi(str4));

/*			bzero			*/

/*			calloc			*/

/*			isalnum			*/
	// Valid inputs
	int num1 = 48;
	int_expect_eq(isalnum(num1), ft_isalnum(num1));
	int num2 = 122;
	int_expect_eq(isalnum(num2), ft_isalnum(num2));

	// Invalid inputs
	int num3 = -12;
	int_expect_eq(isalnum(num3), ft_isalnum(num3));
	int num4 = 200;
	int_expect_eq(isalnum(num4), ft_isalnum(num3));

/*			isalpha			*/
/*			isascii			*/
/*			isdigit			*/
/*			isprint			*/
/*			itoa			*/
/*			memchr			*/
/*			memcmp			*/
/*			memcpy			*/
/*			memmove			*/
/*			memset			*/
/*			putchar_fd		*/
/*			putendl_fd		*/
/*			putnbr_fd		*/
/*			putstr_fd		*/
/*			split			*/
/*			strchr			*/
/*			strdup			*/
/*			striteri		*/
/*			strjoin			*/
/*			strlcat			*/
/*			strlcpy			*/
/*			strlen			*/
/*			strmapi			*/
/*			strncmp			*/
/*			strnstr			*/
/*			strrchr			*/
/*			strtrim			*/
/*			substr			*/
/*			tolower			*/
/*			toupper			*/
/*			Teardown		*/
}
