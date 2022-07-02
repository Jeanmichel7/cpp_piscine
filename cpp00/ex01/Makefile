# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 23:11:11 by jrasser           #+#    #+#              #
#    Updated: 2022/07/02 02:13:10 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	main.cpp \
				utils.cpp \
				class/PhoneBook.class.cpp \
				class/Contact.class.cpp \
				
RM			= @rm -rf
NAME 		= phonebook
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