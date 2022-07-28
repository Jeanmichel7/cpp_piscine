# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 22:12:23 by jrasser           #+#    #+#              #
#    Updated: 2022/07/23 14:32:49 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	main.cpp \
				Fixed.cpp

				
OBJS		= ${SRCS:.c=.o}
RM			= @rm -rf
CC			= g++ -std=c++98
CFLAGS		= -Wall -Wextra -g3 -fsanitize=address

${NAME}	:	${OBJS}
			@${CC} ${OBJS} ${CFLAGS}

all :		${NAME}
clean :
fclean :	clean
			${RM} ${NAME}

re : 		fclean all

.PHONY:		all clean fclean re