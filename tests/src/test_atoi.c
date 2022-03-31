#include "unittests_libft.h"

void test_atoi() {
	// Valid inputs
	char str1[32] = "12312314";
	int_expect_eq("atoi - VI1", atoi(str1), ft_atoi(str1));
	char str4[32] = "-321535234";
	int_expect_eq("atoi - VI 2", atoi(str4), ft_atoi(str4));

	// Invalid inputs
	char str1[32] = "aaa123";
	int_expect_eq("atoi - NVI 1", atoi(str1), ft_atoi(str1));
	char str2[32] = " 123";
	int_expect_eq("atoi - NVI 2", atoi(str2), ft_atoi(str2));

	return;
}
