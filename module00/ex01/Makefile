SRCS =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp \

NAME = phonebook

CPPC = c++

CPPCFLAGS = -Wall -Wextra -Werror

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