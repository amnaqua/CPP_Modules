NAME	=	harl

SRCS	=	main.cpp \
			Harl.cpp

OBJS	=	${SRCS:.cpp=.o}

INCLUDE	=	Harl.hpp

FLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

RM		=	rm -rf
GPP		=	g++

all: ${NAME}

${NAME}: ${OBJS} ${INCLUDE}
	${GPP} ${FLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all