NAME	=	Bureaucrat

SRCS	=	Bureaucrat.cpp \
			Form.cpp \
			main.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADER	=	Bureaucrat.hpp \
			Form.hpp \
			PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp \
			ShrubberyCreationForm.hpp \
			Intern.hpp

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