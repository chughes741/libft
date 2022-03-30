CC           =  gcc
FLAGS        =  -Wall -Werror -Wextra
RM           =  rm -rf

SRCS         =  ../*.c

# Compiles the unit tester, runs it, and cleans up
test: $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) unittests_libft.c -o testoutput
	@./testoutput
	@$(RM) testoutput

clean:
	@$(RM) testoutput

# Runs norminette on all files
norm: 
	@(cd ../ ; norminette -R CheckForbiddenSourceHeader)