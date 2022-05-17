NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

SRCS	=	$(wildcard *.c)
OBJS	=	$(SRCS:.c=.o)

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	@ar -crs $@ $^

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

# Removes objects
clean:
	@$(RM) $(OBJS)

# Removes objects and executable
fclean: clean
	@$(RM) $(NAME)

# Removes objects and executable then remakes all
re: fclean all
