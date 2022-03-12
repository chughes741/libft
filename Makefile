NAME         =  libft.a

CC           =  gcc
FLAGS        =  -Wall -Werror -Wextra
RM           =  rm -rf

LIB          =  libft.h
SRC          =  ft_atoi.c     \
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
                ft_toupper.c  \
OBJ          =  $(SRCS:%.c=%.o)

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	ar $(LIB) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) $(SRC) -c

# Removes objects
clean:
	$(RM) $(OBJ)

# Removes objects and executable
fclean: clean
	$(RM) $(NAME)

# Removes objects and executable then remakes all
re: fclean all