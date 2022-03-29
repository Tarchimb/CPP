SRCS		=	main.cpp						\
				Contact.cpp						\
				PhoneBook.cpp					\
				
OBJS		=	${SRCS:.cpp=.o}

INCLUDES	=	./Contact.hpp					\
				./PhoneBook.hpp					\

CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98


EXEC		=	phonebook

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

%.o: 		%.c
			${CC} ${CFLAGS} -c $< -o $@

${EXEC}:	${OBJS} ${INCLUDES} Makefile
			$(CC) ${CFLAGS} ${SRCS} -o ${EXEC}  

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM}${EXEC} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re