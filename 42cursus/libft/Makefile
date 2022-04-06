SRCS	= ${wildcard *.c}

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

RM		= rm -f

$(NAME):	${OBJS} 
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean
