
NAME = Brain

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

CXX = c++

OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(NAME)

%.o: %.cpp
	@echo "$(YELLOW) Compiling $< ... $(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
		@echo "$(GREEN) Executable $(NAME) created.$(RESET)"

clean:
		@echo "$(GREEN)Cleaning object files...$(RESET)"
		@rm -f $(OBJS)

fclean: clean
		@echo "$(GREEN)Removing executable ..."
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean