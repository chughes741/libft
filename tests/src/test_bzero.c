#include "unittests_libft.h"

void test_bzero() {
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

	return;
}
