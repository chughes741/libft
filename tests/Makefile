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
$(NAME): $(OBJS) $(TOBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ)/%.o: src$(TSRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(NAME)

fclean: clean
	@$(RM) $(OBJS)

# Runs norminette on all files
norm: 
	@(cd ../ ; norminette -R CheckForbiddenSourceHeader)
