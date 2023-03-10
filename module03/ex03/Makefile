SRCS = main.cpp\
	   ClapTrap.cpp\
	   ScavTrap.cpp\
	   FragTrap.cpp\
	   DiamondTrap.cpp\

HDRS = ClapTrap.hpp\
	   ScavTrap.hpp\
	   FragTrap.hpp\
	   DiamondTrap.hpp\

OBJS = $(SRCS:.cpp=.o)

GCHS = $(HDRS:.hpp=.hpp.gch)

FLAGS = -Wextra -Wall -Werror -std=c++98 -g -Wshadow -Wno-shadow

NAME = a.out

RM = rm -f

CC = c++

all : $(NAME)

$(NAME): $(OBJS) $(GCHS)
#	ar -crs $(NAME) $(OBJS)
	$(CC) $(OBJS) $(GCHS) -o $(NAME)
	$(RM) $(OBJS)
	$(RM) $(GCHS)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

%.hpp.gch : %.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(GCHS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: clean fclean re all