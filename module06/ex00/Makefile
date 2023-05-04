SRCS = main.cpp\
	   ScalarConverter.cpp\

HDRS = ScalarConverter.hpp

OBJS = $(SRCS:.cpp=.o)

#GCHS = $(HDRS:.hpp=.hpp.gch)

FLAGS = -Wextra -Wall -Werror -std=c++98 -g

NAME = a.out

RM = rm -f

CC = c++

all : $(NAME)

$(NAME): $(OBJS)
#	ar -crs $(NAME) $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
#	$(RM) $(OBJS)
#	$(RM) $(GCHS)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
#	$(RM) $(GCHS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: clean fclean re all