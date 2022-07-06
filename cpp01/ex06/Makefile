# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 22:12:23 by jrasser           #+#    #+#              #
#    Updated: 2022/07/07 00:04:13 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	main.cpp \
				Harl.cpp
				
OBJS		= ${SRCS:.c=.o}
RM			= @rm -rf
NAME 		= harlFilter
CC			= g++ -std=c++98
CFLAGS		= -Wall -Wextra -g3 -fsanitize=address

${NAME}	:	${OBJS}
			@${CC} -o ${NAME} ${OBJS} ${CFLAGS}

all :		${NAME}
clean :
fclean :	clean
			${RM} ${NAME}

re : 		fclean all

.PHONY:		all clean fclean re