# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 12:45:04 by tarchimb          #+#    #+#              #
#    Updated: 2022/03/17 13:00:16 by tarchimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp						\
				newZombie.cpp					\
				randomChump.cpp					\
				Zombie.cpp						\
				
OBJS		=	${SRCS:.cpp=.o}

INCLUDES	=	Zombie.hpp						\

CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98


EXEC		=	zombie

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

%.o: 		%.c ${INCLUDES}
			${CC} ${CFLAGS} -c $< -o $@

${EXEC}:	 ${OBJS} ${INCLUDES} Makefile
			$(CC) ${CFLAGS} ${SRCS} -o ${EXEC}  

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM}${EXEC} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re