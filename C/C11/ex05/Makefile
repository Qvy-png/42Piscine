# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 19:33:10 by rdel-agu          #+#    #+#              #
#    Updated: 2021/07/19 19:34:07 by rdel-agu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_putnbr.c main.c treat.c

SRCSO	= ft_atoi.o ft_putnbr.o main.o treat.o

NAME	= do-op

GCC		= gcc

FLAGS	= -o ${NAME} -Wall -Werror -Wextra

RM		=/bin/rm -rf

all:	$(NAME)

$(NAME): ${SRCSO}
	${GCC} ${FLAGS} ${SRCS}

clean:
	${RM} ${SRCSO}

fclean:	clean
	${RM} ${NAME}

re: fclean all
