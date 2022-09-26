NAME	=	Brain

SRCS	=	Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp \
			Human.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}

INC		=	Animal.hpp \
			Dog.hpp \
			Cat.hpp \
			Brain.hpp \
			Human.hpp

GPP		=	clang++
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror
STDFLAG =	-std=c++98

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${GPP} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all