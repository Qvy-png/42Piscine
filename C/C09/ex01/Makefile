# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 17:21:45 by rdel-agu          #+#    #+#              #
#    Updated: 2021/07/19 17:22:33 by rdel-agu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS 	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

GCC		= gcc

RM		= rm -f

CFLAGS	=  -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I includes

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
