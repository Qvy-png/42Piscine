SRCS		= main.c belowNum.c fileToStr.c ft_file.c ft_atoi.c print_inf.c \
			  error.c

SRCSO		= main.o belowNum.o fileToStr.o ft_file.o ft_atoi.o print_inf.o \
			  error.o

NAME		= rush-02

GCC			= gcc

OFLAGS		= -o ${NAME} ${SRCS} ${FLAGS} 

FLAGS		= -Wall -Wextra -Werror 

RM			= /bin/rm -rf

all:	$(NAME)

$(NAME):	${SRCSO}
	${GCC} ${OFLAGS}

clean:
	${RM} ${SRCSO}

fclean: clean
	${RM} ${NAME}

re: fclean all
