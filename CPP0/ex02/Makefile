# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 20:07:15 by tarchimb          #+#    #+#              #
#    Updated: 2022/03/30 20:08:18 by tarchimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	Account.cpp					\
				
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	objects
SRCS_DIR	=	srcs

INCLUDES	=	./includes/Account.hpp		\
				
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

LIBINCLUDES	=	-Iincludes 

LIB			=	libaccount.a			

EXEC		=	account

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

${OBJS_DIR}/%.o: 	${SRCS_DIR}/%.cpp	${INCLUDES} Makefile
			${MKDIR} $(@D)
			${CC} ${CFLAGS} ${LIBINCLUDES} -c $< -o $@

$(LIB):		${OBJS} ${INCLUDES}
			ar rcs ${LIB} ${OBJS}


${EXEC}:	tests.cpp ${LIB}
			$(CC) ${CFLAGS} ${LIBINCLUDES} tests.cpp ${EXECINCLUDES} ${LIB} -o ${EXEC}  

clean:
			${RM} ${OBJS} $(OBJS_DIR)

fclean:		clean
			${RM} ${LIB} ${EXEC} ${LIB} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re object