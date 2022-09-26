NAME	=	bsp

SRCS	=	main.cpp \
			bsp.cpp \
			Fixed.cpp \
			Point.cpp

OBJS	=	${SRCS:.cpp=.o}

INC_P	=	Point.hpp
INC_F	=	Fixed.hpp

FLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

RM		=	rm -rf
GPP		=	g++

.PHONY:	re all clean fclean

all: ${NAME}

${NAME}: ${OBJS} ${INC_P} ${INC_F}
	${GPP} ${FLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all