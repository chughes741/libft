NAME         =  testoutput

CC           =  gcc
FLAGS        =  -Wall -Werror -Wextra
RM           =  rm -rf

SRC         =  ../*.c

# Compiles the unit tester, runs it, and cleans up
test: $(SRCS) clean
	@$(CC) $(FLAGS) $(SRCS) unittests_libft.c -o $(NAME)
	@./$(NAME)
	@$(RM) $(NAME)

clean:
	@$(RM) $(NAME)

# Shows all objects
dump: clean
	@$(CC) $(FLAGS) $(SRCS) unittests_libft.c -o $(NAME)
	@objdump -d $(NAME)
	@$(RM) $(NAME)

# Runs norminette on all files
norm: 
	@(cd ../ ; norminette -R CheckForbiddenSourceHeader)
