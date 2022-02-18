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
	char str3[12] = " 42 42 420 69";
	char str4[12] = "--41231";
	char str5[12] = "-3147483648";
	char str6[12] = "3147483648";
	EXPECT_EQ(atoi(str1), ft_atoi(str1));
	EXPECT_EQ(atoi(str2), ft_atoi(str2));
	EXPECT_EQ(atoi(str3), ft_atoi(str3));
	EXPECT_EQ(atoi(str4), ft_atoi(str4));
	EXPECT_EQ(atoi(str5), ft_atoi(str5));
	EXPECT_EQ(atoi(str6), ft_atoi(str6));
}

TEST(bzero, IsRangeZero) { // TODO add tests
	char str[3] = "a1";
	EXPECT_EQ();
}

TEST(calloc, CheckReturn) {
	void *ptr;
	EXPECT_EQ(*ptr, calloc(1, 1));
}

TEST(calloc, CheckAllocatedSize) {
	EXPECT_EQ(calloc(1, 1), ft_calloc(1, 1));
	EXPECT_EQ(calloc(12, 12), ft_calloc(12, 12));
}

TEST(calloc, CheckNullBytes) {
	void *ptr1 = calloc(4, 4);
	void *ptr2 = ft_calloc(4, 4);
	EXPECT_EQ(ptr1[3], ptr2[3]);
}

TEST(isalnum, HandlesValidInput) {
	int number1 = 'y';
	int number2 = '9';
	EXPECT_EQ(isalnum(number1), ft_isalnum(number1));
	EXPECT_EQ(isalnum(number2), ft_isalnum(number2));
}

TEST(isalnum, HandlesInvalidInput) {
	int number1 = '?';
	int number2 = '\n';
	int number3 = ' ';
	int number4 = '+';
	EXPECT_EQ(isalnum(number1), ft_isalnum(number1));
	EXPECT_EQ(isalnum(number2), ft_isalnum(number2));
	EXPECT_EQ(isalnum(number3), ft_isalnum(number3));
	EXPECT_EQ(isalnum(number4), ft_isalnum(number4));
}

TEST(isalpha, HandlesValidInput) {
	int number1 = 'a';
	int number2 = 'z';
	EXPECT_EQ(isalpha(number1), ft_isalpha(number1));
	EXPECT_EQ(isalpha(number2), ft_isalpha(number2));
}

TEST(isalpha, HandlesInvalidInput) {
	int number1 = ' ';
	int number2 = '9';
	int number2 = '\t';
	EXPECT_EQ(isalpha(number1), ft_isalpha(number1));
	EXPECT_EQ(isalpha(number2), ft_isalpha(number2));
	EXPECT_EQ(isalpha(number3), ft_isalpha(number3));
}

TEST(isascii, HandlesValidInput) {
	int number1 = '\x00';
	int number2 = '\x7F';
	EXPECT_NE(0, ft_isascii(number2));
}

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
