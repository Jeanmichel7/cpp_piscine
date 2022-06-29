# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 23:11:11 by jrasser           #+#    #+#              #
#    Updated: 2022/06/29 23:11:24 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= phonebook.cpp
RM			= @rm -f
NAME 		= phonebook
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