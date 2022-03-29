# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 10:49:48 by tarchimb          #+#    #+#              #
#    Updated: 2022/03/26 09:31:45 by tarchimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp				\
				Fixed.cpp				\
				
OBJS		=	${SRCS:.cpp=.o}

INCLUDES	=	Fixed.hpp				\
				
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98


EXEC		=	fixed

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

%.o: 		%.c ${INCLUDES}
			${CC} ${CFLAGS} -c $< -o $@

${EXEC}:	${OBJS} ${INCLUDES}
			$(CC) ${CFLAGS} ${SRCS} -o ${EXEC}  

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM}${EXEC} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re