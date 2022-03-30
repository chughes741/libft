# include "../libft.h"
# include "../libft_bonus.h"
# include "testutils.c"

int	main() {
/*			Setup			*/

/*			atoi			*/
	// Valid input
	char str3[32] = "321535234";
	int_expect_eq("atoi - VI 1", atoi(str3), ft_atoi(str3));
	char str4[32] = "-321535234";
	int_expect_eq("atoi - VI 2", atoi(str4), ft_atoi(str4));

	// Invalid inputs
	char str1[32] = "aaa123";
	int_expect_eq("atoi - NVI 1", atoi(str1), ft_atoi(str1));
	char str2[32] = " 123";
	int_expect_eq("atoi - NVI 2", atoi(str2), ft_atoi(str2));


/*			bzero			*/
	size_t n1 = 5;
	char str5[6] = "Hello";
	char str6[6] = "Hello";
	bzero(str5, n1);
	ft_bzero(str6, n1);
	int_expect_eq("bzero - 1", 0, memcmp(str5, str6, n1));
	
	size_t n2 = 0;
	char str7[6] = "Hello";
	char str8[6] = "Hello";
	bzero(str7, n2);
	ft_bzero(str8, n2);
	int_expect_eq("bzero - 2", 0, memcmp(str7, str8, n2));


/*			calloc			*/

/*			isalnum			*/
	// Valid inputs
	int num1 = 48;
	int_expect_eq("isalnum - VI 1", isalnum(num1), ft_isalnum(num1));
	int num2 = 122;
	int_expect_eq("isalnum - VI 2", isalnum(num2), ft_isalnum(num2));

	// Invalid inputs
	int num3 = -12;
	int_expect_eq("isalnum - NVI 1", isalnum(num3), ft_isalnum(num3));
	int num4 = 200;
	int_expect_eq("isalnum - NVI 2", isalnum(num4), ft_isalnum(num3));

/*			isalpha			*/
	// Valid inputs
	char str9[32] = "asdgASDASD";
	int_expect_eq("isalpha - VI 1", isalpha(str9), ft_isalpha(str9));

	// Invalid inputs
	char str10[32] = " asd";
	int_expect_eq("isalpha - NVI 1", isalpha(str10), ft_isalpha(str10));

/*			isascii			*/
/*			isdigit			*/
	// Valid inputs
	char str11[32] = "123124";
	int_expect_eq("isdigit - VI 1", isdigit(str11), ft_isdigit(str11));

	// Invalid inputs
	char str12[32] = "123124a";
	int_expect_eq("isdigit - NVI 1", isdigit(str12), ft_isdigit(str12));

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
