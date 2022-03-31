#include "unittests_libft.h"

void test_isdigit() {
		// Valid inputs
	char str11[32] = "123124";
	int_expect_eq("isdigit - VI 1", isdigit(str11), ft_isdigit(str11));

	// Invalid inputs
	char str12[32] = "123124a";
	int_expect_eq("isdigit - NVI 1", isdigit(str12), ft_isdigit(str12));
	return;
}
