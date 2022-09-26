NAME	=	Bureaucrat

SRCS	=	Bureaucrat.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADER	=	Bureaucrat.hpp

CFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98
GPP		=	clang++
RM		=	rm -rf

.PHONY: all re clean fclean

all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
	${GPP} ${CFLAGS} ${STDFLAG} -o ${NAME} ${SRCS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all