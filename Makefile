NAME         =  libft.a

CC           =  gcc
FLAGS        =  -Wall -Werror -Wextra
RM           =  rm -rf

SRCS         =  ft_atoi.c     \
                ft_bzero.c    \
                ft_calloc.c   \
                ft_isalnum.c  \
                ft_isalpha.c  \
                ft_isascii.c  \
                ft_isdigit.c  \
                ft_isprint.c  \
                ft_memchr.c   \
                ft_memcmp.c   \
                ft_memcpy.c   \
                ft_memmove.c  \
                ft_memset.c   \
                ft_strchr.c   \
                ft_strdup.c   \
                ft_strlcat.c  \
                ft_strlcpy.c  \
                ft_strlen.c   \
                ft_strncmp.c  \
                ft_strnstr.c  \
                ft_strrchr.c  \
                ft_tolower.c  \
                ft_toupper.c
OBJS         =  ft_atoi.o     \
                ft_bzero.o    \
                ft_calloc.o   \
                ft_isalnum.o  \
                ft_isalpha.o  \
                ft_isascii.o  \
                ft_isdigit.o  \
                ft_isprint.o  \
                ft_memchr.o   \
                ft_memcmp.o   \
                ft_memcpy.o   \
                ft_memmove.o  \
                ft_memset.o   \
                ft_strchr.o   \
                ft_strdup.o   \
                ft_strlcat.o  \
                ft_strlcpy.o  \
                ft_strlen.o   \
                ft_strncmp.o  \
                ft_strnstr.o  \
                ft_strrchr.o  \
                ft_tolower.o  \
                ft_toupper.o


# Targets
all: $(NAME) clean

$(NAME): $(OBJS)
	@ar -crs $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	@$(CC) -c $(FLAGS) $(SRCS)

# Removes objects
clean:
	@$(RM) $(OBJS)

# Removes objects and executable
fclean: clean
	@$(RM) $(NAME)

# Removes objects and executable then remakes all
re: fclean all

# Compiles the unit tester, runs it, and cleans up
test: $(OBJS)
	@$(CC) $(FLAGS) $(SRCS) tests/unittests.c -o testoutput
	@./testoutput
	@$(RM) testoutput $(OBJS)

# Runs norminette on all files
norm: 
	@norminette -R CheckForbiddenSourceHeader