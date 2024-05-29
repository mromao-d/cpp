# compiler
cxx = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g 

SRC_DIR = src
OBJ_DIR = obj

NAME = Weapon

SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/HumanA.cpp $(SRC_DIR)/HumanB.cpp $(SRC_DIR)/Weapon.cpp
# SRCS = $(SRC_DIR)/Contact.cpp $(SRC_DIR)/main.cpp

OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all:	$(NAME)

clean:	
		rm -rf $(OBJ_DIR)

fclean: clean 
		rm -rf $(NAME)

run: fclean all ./$(NAME)

re:	fclean all

$(NAME): $(OBJS) 
		$(cxx) $(OBJS) $(CXXFLAGS) -o $(NAME)

%.o: %.cpp
		$(cxx) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR): 
		mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
		$(cxx) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re run
