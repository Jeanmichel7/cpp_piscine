# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 18:43:19 by jrasser           #+#    #+#              #
#    Updated: 2022/07/05 03:48:44 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp
				
RM			= @rm -rf
NAME 		= prog
CC			= g++ -std=c++98
CFLAGS		= -Wall -Wextra -g -fsanitize=address

${NAME}	:	${SRCS}
			@${CC} -o ${NAME} ${SRCS} ${CFLAGS}

all :		${NAME}
clean :
fclean :	clean
			${RM} ${NAME}

re : 		fclean all

.PHONY:		all clean fclean re