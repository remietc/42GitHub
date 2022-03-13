
SRCS	= main.c decorticage.c convert.c ft_atoi.c read_file.c ft_putstr.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

FLAGS 	= -Wall -Wextra -Werror

RM		= rm -f

${NAME}:	${OBJS}
			cc ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
