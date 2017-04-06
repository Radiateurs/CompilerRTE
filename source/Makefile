#----------------------------------------------
# Compile the rte compiler.
#
# Version : 1.0
#----------------------------------------------

CC =		gcc

RM =		rm -f

CP =		cp

NAME =		mktr2

SRC =		src/main.c

OBJ =		$(SRC:.c=.o)

INC =		-I./include/

CFLAGS +=	$(INC)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		clean $(NAME)

.PHONY:		$(NAME) clean fclean re
