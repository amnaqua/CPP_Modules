NAME	=	MutantStack

SRC		=	main.cpp 

OBJS	=	${SRC:.cpp=.o}

INC		=	MutantStack.hpp

CC		=	g++
RM		=	rm -rf
STDFLAG	=	-std=c++98
CFLAGS	=	-Wall -Wextra -Werror

.PHONY: re fclean clean all

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${CC} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all