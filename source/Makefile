#----------------------------------------------
# Compile the rte compiler.
#
# Version : 1.0
#----------------------------------------------

CC =		gcc -std=gnu99

RM =		rm -f

CP =		cp

NAME =		mktr2

SRC =		src/main.c	\
		$(ERRSRC)

ERRSRC =	src/error/flagError.c

OBJ =		$(SRC:.c=.o)

INC =		-I./include/

LIB =		-L./lib/ -lfast_io

CFLAGS +=	$(INC) $(LIB)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		clean $(NAME)

dbg:		CFLAGS += -g
dbg:		re

flags:		CFLAGS += -W -Werror -Wextra
flags:		re

.PHONY:		$(NAME) clean fclean re dbg flags
