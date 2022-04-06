SRCS	= main.c get_file.c format_maps.c check_map_validity.c tools.c resolution.c

OBJS	= ${SRCS:.c=.o}

NAME	= BSQ

FLAGS 	= -Wall -Wextra -Werror -g

RM		= rm -f

${NAME}:	${OBJS}
			cc ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
