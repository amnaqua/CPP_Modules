NAME	=	violence

SRCS	=	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp

OBJS	=	${SRCS:.cpp=.o}

INC_A	=	HumanA.hpp
INC_B	=	HumanB.hpp
INX_W	=	Weapon.hpp

FLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

RM		=	rm -rf
GPP		=	g++

all: ${NAME}

${NAME}: ${OBJS} ${INC_A} ${INC_B} ${INC_W}
	${GPP} ${FLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all