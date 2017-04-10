#----------------------------------------------
# Compile the rte compiler.
#
# Version : 1.0
#----------------------------------------------

CC =		gcc

RM =		rm -f

CP =		cp

NAME =		mktr2

SRC =		src/main.c		\
		src/RTEhandler.c	\
		src/init.c		\
		src/quit.c		\
		$(ERRSRC)		\
		$(PARSESRC)

PARSESRC =	src/parser/getnextline.c	\
		src/parser/parser_main.c

ERRSRC =	src/error/flagError.c

OBJ =		$(SRC:.c=.o)

INC =		-I./include/

LIB =		-L./lib/ -lfast_io -lptr_manip

CFLAGS +=	-std=gnu99 $(INC) $(LIB)

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
