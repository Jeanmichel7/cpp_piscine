# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 22:12:23 by jrasser           #+#    #+#              #
#    Updated: 2022/07/30 22:15:51 by jrasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLU			= \e[0;34m
GRN			= \e[0;32m
RED			= \e[0;31m

ERASE		= \e[2K\r
END			= \e[0m
CHECK 		= ✓


SRCS 		= $(wildcard srcs/**.cpp)
NAME		= prog
OBJS_DIR	= objs/
OBJS		= $(addprefix $(OBJS_DIR), $(notdir $(SRCS:.cpp=.o)))
RM			= @rm -rf
CC			= g++
CFLAGS		= -std=c++98 -Wall -Wextra
CPPFLAGS	= -I./class
DEBEUG		= -g -fsanitize=address

objs/%.o: srcs/**%.cpp
			@mkdir -p $(OBJS_DIR)
			@${CC} $(CPPFLAGS) -o $@ -c $< ${CFLAGS}
			@printf	"$(ERASE) ${BLU}$ [BUILD]${RST} '$<' $(END)"
			

${NAME}	:	${OBJS}
			@${CC} ${OBJS} -o $(NAME) ${CFLAGS} ${DEBEUG}
			@echo "$(ERASE)$(GRN) [Successfully compiled]$(END)	$(CHECK) \n"
			@echo "executable ./$(NAME)"

all :		${NAME}

clean :
			${RM} $(OBJS)
			@echo "$(GRN) [Clean]$(END) 			$(CHECK)"

fclean :	clean
			${RM} ${NAME}
			@echo "$(GRN) [Fclean]$(END) 			$(CHECK)"

re : 		fclean all

.PHONY:		all clean fclean re