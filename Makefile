
NAME 		= libftprintf.a
SRCS 		= ft_printf.c ft_print_hex.c ft_print_nbr.c ft_print_ptr.c ft_print_unsigned.c ft_prints.c
OBJS 		= ${SRCS:.c=.o}

RM 			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror.

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean ${NAME}