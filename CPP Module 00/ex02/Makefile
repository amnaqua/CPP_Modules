NAME	=	test

SRCS	=	Account.cpp \
			test.cpp

OBJS	=	${SRCS:.cpp=.o}
INCLUDE	=	Account.hpp
GPP		=	g++
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

.PHONY: clean fclean all re

all: ${NAME}

${NAME}: ${OBJS} ${INCLUDE}
	${GPP} ${FLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all