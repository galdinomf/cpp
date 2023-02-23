SRCS = main.cpp\
	   Weapon.cpp\
	   HumanA.cpp\
	   HumanB.cpp\

HDRS = Weapon.hpp\
	   HumanA.hpp\

HDR_DIR = includes/
SRC_DIR = src/
OBJ_DIR = obj/

OBJS = $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.cpp=.o)))

GCHS = $(addprefix $(OBJ_DIR), $(notdir $(HDRS:.hpp=.hpp.gch)))

FLAGS = -Wextra -Wall -Werror -std=c++98 -g

NAME = weapons

RM = rm -f

CC = c++

all : $(NAME)

$(NAME): $(OBJS) $(GCHS)
#	ar -crs $(NAME) $(OBJS)
	$(CC) $(OBJS) $(GCHS) -o $(NAME)
# 	$(RM) $(OBJS)
#	$(RM) $(GCHS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR)%.hpp.gch : $(HDR_DIR)%.hpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(GCHS)
	rmdir $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: clean fclean re all