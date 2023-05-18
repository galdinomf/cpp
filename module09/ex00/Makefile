SRCS = main.cpp\

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wextra -Wall -Werror -std=c++98 -g

NAME = btc

RM = rm -f

CC = c++

all : $(NAME)

$(NAME): $(OBJS) $(GCHS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: clean fclean re all