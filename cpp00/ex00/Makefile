# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 23:37:34 by jrasser           #+#    #+#              #
#    Updated: 2022/06/28 23:50:39 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp |
RM			= @rm -f
NAME 		= megaphone
CC			= g++ -std=c++98
CFLAGS		= -Wall -Wextra -Werror

${NAME}	:	${SRCS}
			@${CC} -o ${NAME} ${SRCS}

all :		${NAME}
clean :
fclean :	clean
			${RM} ${NAME}

re : 		fclean all

.PHONY:		all clean fclean re