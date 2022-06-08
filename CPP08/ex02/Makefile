# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 12:45:04 by tarchimb          #+#    #+#              #
#    Updated: 2022/06/07 18:10:15 by tarchimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES	=	./includes/MutantStack.hpp	\
				./includes/alias.h			\
				
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

EXEC		=	mutant

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

${EXEC}:	main.cpp ${INCLUDES} Makefile
			$(CC) ${CFLAGS} main.cpp -o ${EXEC}  

clean:
			${RM} ${OBJS} $(OBJS_DIR)

fclean:		clean
			${RM} ${LIB} ${EXEC} ${LIB} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re object
