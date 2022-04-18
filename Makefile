NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-I$(NAME) -Wall -Werror -Wextra
RM		=	rm -rf

SRCS	=	$(wildcard *.c)
OBJS	=	$(SRCS:.c=.o)

# Targets
all: $(NAME) clean

$(NAME): $(OBJS)
	@ar -crs $@ $^

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $^

# Removes objects
clean:
	@$(RM) $(OBJS)

# Removes objects and executable
fclean: clean
	@$(RM) $(NAME)

# Removes objects and executable then remakes all
re: fclean all
