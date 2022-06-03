# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 12:45:04 by tarchimb          #+#    #+#              #
#    Updated: 2022/06/02 14:15:08 by tarchimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	BaseClass.cpp			\
				
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	objects
SRCS_DIR	=	srcs

INCLUDES	=	./includes/BaseClass.hpp\
				./includes/main.hpp		\
				./includes/alias.h		\
				
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

LIBINCLUDES	=	-Iincludes 

EXEC		=	data

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

${EXEC}:	main.cpp 
			$(CC) ${CFLAGS} ${LIBINCLUDES} main.cpp -o ${EXEC}  

clean:
			${RM} ${OBJS} $(OBJS_DIR)

fclean:		clean
			${RM} ${LIB} ${EXEC} ${LIB} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re object
