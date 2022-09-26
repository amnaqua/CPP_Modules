NAME	=	brain

SRCS	=	main.cpp \

OBJS	=	${SRCS:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

RM		=	rm -rf
GPP		=	g++

all: ${NAME}

${NAME}: ${OBJS}
	${GPP} ${FLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all