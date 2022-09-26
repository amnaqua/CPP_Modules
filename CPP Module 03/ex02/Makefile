NAME	=	FragTrap

SRCS	=	ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}

INC		=	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp

GPP		=	g++
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${GPP} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all