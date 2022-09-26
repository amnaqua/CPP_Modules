NAME	=	zombie

SRCS	=	main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp

OBJS	=	${SRCS:.cpp=.o}

INCLUDE	=	Zombie.hpp

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