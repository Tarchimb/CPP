SRCS		=	tests.cpp						\
				Account.cpp						\
				
OBJS		=	${SRCS:.cpp=.o}

INCLUDES	=	./Account.hpp					\

CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98


EXEC		=	account

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

%.o: 		%.c
			${CC} ${CFLAGS} -c $< -o $@

${EXEC}:	 ${OBJS} ${INCLUDES} Makefile
			$(CC) ${CFLAGS} ${SRCS} -o ${EXEC}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM}${EXEC} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re libft object