NAME	=	fixed

SRCS	=	main.cpp \
			Fixed.cpp \

OBJS	=	${SRCS:.cpp=.o}

INCLUDE =	Fixed.hpp

FLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

RM		=	rm -rf
GPP		=	g++

.PHONY:	re all clean fclean

all: ${NAME}

${NAME}: ${OBJS} ${INCLUDE}
	${GPP} ${FLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all