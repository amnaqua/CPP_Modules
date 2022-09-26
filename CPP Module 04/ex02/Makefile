NAME	=	Abstract

SRCS	=	Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			Human.cpp \
			Brain.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}

INC		=	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			Human.hpp \
			Brain.hpp

GPP		=	clang++
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

.PHONY: re clean fclean all

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${GPP} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all