#include "unittests_libft.h"

void test_isalpha() {
		// Valid inputs
	char str9[32] = "asdgASDASD";
	int_expect_eq("isalpha - VI 1", isalpha(str9), ft_isalpha(str9));

	// Invalid inputs
	char str10[32] = " asd";
	int_expect_eq("isalpha - NVI 1", isalpha(str10), ft_isalpha(str10));

	return;
}
