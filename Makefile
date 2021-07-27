SRCS 	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c

OBJS	= ${SRCS:.c=.o}

all:
		gcc -c ${SRCS}

clean:
		rm *.o