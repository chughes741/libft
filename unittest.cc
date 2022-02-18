#include "gtest/gtest.h"

extern "C" {
#include "libft.h"
}

TEST(atoi, HandlesNoInput) {
	char str = "";
	EXPECT_EQ(atoi(str), ft_atoi(str));
}

TEST(atoi, HandlesPositiveInput) {
	char str[12] = "2342";
	EXPECT_EQ(atoi(str), ft_atoi(str));
}

TEST(atoi, HandlesNegativeInput) {
	char str[12] = "-12312";
	EXPECT_EQ(atoi(str), ft_atoi(str));
}

TEST(atoi, HandlesMaxInput) {
	char str[12] = "2147483647";
	EXPECT_EQ(atoi(str), ft_atoi(str));
}

TEST(atoi, HandlesMinInput) {
	char str[12] = "-2147483648";
	EXPECT_EQ(atoi(str), ft_atoi(str));
}

TEST(atoi, HandlesInvalidInput) {
	char str1[12] = "a12314";
	char str2[12] = "-41231a";
	char str3[12] = " 41231";
	EXPECT_EQ(atoi(str1), ft_atoi(str1));
	EXPECT_EQ(atoi(str2), ft_atoi(str2));
	EXPECT_EQ(atoi(str3), ft_atoi(str3));
}

TEST(bzero, IsRangeZero) { // TODO add tests
	char str[3] = "a1";
	EXPECT_EQ();
}

TEST(calloc, )

TEST(isalnum, )

TEST(isalpha, )

TEST(isascii, )

TEST(isdigit, )

TEST(isprint, )

TEST(memchr, )

TEST(memcmp, )

TEST(memcpy, )

TEST(memmove, )

TEST(memset, )

TEST(strchr, )

TEST(strdup, )

TEST(strlcat, )

TEST(strlcpy, )

TEST(strlen, )

TEST(strncmp, )

TEST(strnstr, )

TEST(strrchr, )

TEST(tolower, )

TEST(toupper, )
