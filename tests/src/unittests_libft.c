# include "unittests_libft.h"

int	main(int argc, char **argv) {
	if (argc == 1 || argv[2] == "atoi")
		test_atoi();

	if (argc == 1 || argv[2] == "bzero")
		test_bzero();

	if (argc == 1 || argv[2] == "calloc")
		test_calloc();

	if (argc == 1 || argv[2] == "isalnum")
		test_isalnum();

	if (argc == 1 || argv[2] == "isalpha")
		test_isalpha();

	if (argc == 1 || argv[2] == "isascii")
		test_isascii();

	if (argc == 1 || argv[2] == "isdigit")
		test_isdigit();

	if (argc == 1 || argv[2] == "isprint")
		test_isprint();

	if (argc == 1 || argv[2] == "itoa")
		test_itoa();

	if (argc == 1 || argv[2] == "lstadd_back")
		test_lstadd_back();

	if (argc == 1 || argv[2] == "lstadd")
		test_lstadd();

	if (argc == 1 || argv[2] == "lstclear")
		test_lstclear();

	if (argc == 1 || argv[2] == "lstdelone")
		test_lstdelone();

	if (argc == 1 || argv[2] == "lstiter")
		test_lstiter();

	if (argc == 1 || argv[2] == "lstlast")
		test_lstlast();

	if (argc == 1 || argv[2] == "lstmap")
		test_lstmap();

	if (argc == 1 || argv[2] == "lstnew")
		test_lstnew();

	if (argc == 1 || argv[2] == "lstsize")
		test_lstsize();

	if (argc == 1 || argv[2] == "memchr")
		test_mrmchr();

	if (argc == 1 || argv[2] == "memcpy")
		test_memcpy();

	if (argc == 1 || argv[2] == "memmove")
		test_memmove();

	if (argc == 1 || argv[2] == "memset")
		test_memset();

	if (argc == 1 || argv[2] == "putchar_fd")
		test_putchar_fd();

	if (argc == 1 || argv[2] == "putendl_fd")
		test_putendl_fd();

	if (argc == 1 || argv[2] == "putnbr_fd")
		test_putnbr_fd();

	if (argc == 1 || argv[2] == "putstr_fd")
		test_putstr_fd();

	if (argc == 1 || argv[2] == "split")
		test_split();

	if (argc == 1 || argv[2] == "strchr")
		test_strchr();

	if (argc == 1 || argv[2] == "strdup")
		test_strdup();

	if (argc == 1 || argv[2] == "striteri")
		test_striteri();

	if (argc == 1 || argv[2] == "strjoin")
		test_strjoin();

	if (argc == 1 || argv[2] == "strlcat")
		test_strlcat();

	if (argc == 1 || argv[2] == "strlcpy")
		test_strlcpy();

	if (argc == 1 || argv[2] == "strlen")
		test_strlen();

	if (argc == 1 || argv[2] == "strmapi")
		test_strmapi();

	if (argc == 1 || argv[2] == "strncmp")
		test_strncmp();

	if (argc == 1 || argv[2] == "strnstr")
		test_strnstr();

	if (argc == 1 || argv[2] == "strrchr")
		test_strrchr();

	if (argc == 1 || argv[2] == "strtrim")
		test_strtrim();

	if (argc == 1 || argv[2] == "substr")
		test_substr();

	if (argc == 1 || argv[2] == "tolower")
		test_tolower();

	if (argc == 1 || argv[2] == "toupper")
		test_toupper();
}
