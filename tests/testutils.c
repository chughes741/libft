# include <stdio.h>

/*    Color schemes    */
void set_default() {
	printf("\033[0m");
}
void set_black() {
	printf("\033[0;30m");
}
void set_red() {
	printf("\033[0;31m");
}
void set_green() {
	printf("\033[0;32m");
}
void set_yellow() {
	printf("\033[0;33m");
}
void set_blue() {
	printf("\033[0;34m");
}
void set_purple() {
	printf("\033[0;35m");
}
void set_cyan() {
	printf("\033[0;36m");
}
void set_white() {
	printf("\033[0;37m");
}


/*    Test tools       */
void int_expect_eq(int real_val, int test_val) {
	if (real_val == test_val) {
		set_green();
		printf("Test passed\n");
		return;
		}
	set_red();
	printf("Test failled");
}

void int_expect_neq(int real_val, int test_val) {
	if (real_val != test_val) {
		set_green();
		printf("Test passed\n");
		return;
		}
	set_red();
	printf("Test failled");
}

void char_expect_eq(char real_val, char test_val) {
	if (real_val == test_val) {
		set_green();
		printf("Test passed\n");
		return;
		}
	set_red();
	printf("Test failled");
}

void char_expect_neq(char real_val, char test_val) {
	if (real_val != test_val) {
		set_green();
		printf("Test passed\n");
		return;
		}
	set_red();
	printf("Test failled");
}

void sizet_expect_eq(size_t real_val, size_t test_val) {
	if (real_val == test_val) {
		set_green();
		printf("Test passed\n");
		return;
		}
	set_red();
	printf("Test failled");
}

void sizet_expect_neq(size_t real_val, size_t test_val) {
	if (real_val != test_val) {
		set_green();
		printf("Test passed\n");
		return;
		}
	set_red();
	printf("Test failled");
}























