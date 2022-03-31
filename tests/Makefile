NAME		=	test

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf

SRC			=	../
SRCS		=	$(wildcard $(SRC)/*.c)
OBJ			=	obj
OBJS		=	$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
TSRC		=	src
TSRCS		=	$(wildcard $(TSRC)/*.c)

all: $(NAME)

# Compiles the unit tester, runs it, and cleans up
$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

$(OBJ)/%.o: $(SRC)/%.c $(TSRC)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME)

# Shows all objects
dump: clean
	@$(CC) $(FLAGS) $(SRCS) unittests_libft.c -o $(NAME)
	@objdump -d $(NAME)
	@$(RM) $(NAME)

# Runs norminette on all files
norm: 
	@(cd ../ ; norminette -R CheckForbiddenSourceHeader)
