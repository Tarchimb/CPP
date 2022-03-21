# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 10:49:48 by tarchimb          #+#    #+#              #
#    Updated: 2022/03/21 14:45:35 by tarchimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp				\
				Harl.cpp				\
				
OBJS		=	${SRCS:.cpp=.o}

INCLUDES	=	Harl.hpp				\
				
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98


EXEC		=	Harl

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

%.o: 		%.c ${INCLUDES}
			${CC} ${CFLAGS} -c $< -o $@

${EXEC}:	${OBJS}
			$(CC) ${CFLAGS} ${SRCS} -o ${EXEC}  

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM}${EXEC} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re