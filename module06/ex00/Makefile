SRCS =	main.cpp ScalarConverter.cpp \

NAME = convert

CPPC = c++

CPPCFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPPC) $(CPPCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re