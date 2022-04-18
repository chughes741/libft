NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-I$(IDIR) -Wall -Werror -Wextra
RM		=	rm -rf

IDIR	=	include
SDIR	=	src
ODIR	=	obj


SRCS	=	$(wildcard $(SDIR)/*.c)
OBJS	=	$(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	@ar -crs $@ $^

$(ODIR)/%.o: $(SDIR)/%.c
	@$(CC) $(CFLAGS) -c $^ -o $@

# Removes objects
clean:
	@$(RM) $(ODIR)/*.o

# Removes objects and executable
fclean: clean
	@$(RM) $(NAME)

# Removes objects and executable then remakes all
re: fclean all
