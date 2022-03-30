SRCS		=	megaphone.cpp			\
				
OBJS		=	${SRCS:.cpp=.o}

CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98


EXEC		=	megaphone

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

%.o: 		%.cpp
			${CC} ${CFLAGS} -c $< -o $@

${EXEC}:	${OBJS} Makefile
			$(CC) ${CFLAGS} ${EXEC}.cpp -o ${EXEC}  

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM}${EXEC} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re