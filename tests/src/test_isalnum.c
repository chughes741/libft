#include "unittests_libft.h"

void test_alnum() {
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

	return;
}
