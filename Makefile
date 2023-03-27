
NAME 		= libftprintf.a
SRCS 		= sources/ft_printf.c sources/ft_print_hex.c sources/ft_print_nbr.c sources/ft_print_ptr.c sources/ft_print_unsigned.c sources/ft_prints.c
OBJS 		= ${SRCS:.c=.o}

RM 			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean ${NAME}