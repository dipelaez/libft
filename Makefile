SRCS 	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_memcpy.c

OBJS	= ${SRCS:.c=.o}

NAME	=	libft.a

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Werror -Wextra

LIB		=	ar rc


${NAME}:	
		${CC} ${CFLAGS} -c ${SRCS}
		${LIB} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
