# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 13:29:33 by jrasser           #+#    #+#              #
#    Updated: 2022/07/05 13:50:43 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp \
				
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