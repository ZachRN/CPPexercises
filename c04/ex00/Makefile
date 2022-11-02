NAME = Animal
SRCS =	srcs/Animal.cpp\
		srcs/Dog.cpp\
		srcs/Cat.cpp\
		srcs/main.cpp\
		srcs/WrongAnimal.cpp\
		srcs/WrongCat.cpp
HEADER_FILES =	includes/Animal.hpp\
				includes/Brain.hpp\
				includes/Dog.hpp\
				includes/WrongAnimal.hpp\
				includes/WrongCat.hpp
OBJ_FILES = $(patsubst %.cpp, %.o, $(SRCS))
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@echo Assembling $(NAME)
	@$(CC) -o $@ $^ $(CFLAGS)
	@echo $(NAME) has been made!

%.o: %.c
	@$(CC) $(HEADER_FILES) -c $(CFLAGS) -o $@ $<

clean:
	@echo Cleaning all object files 
	@rm -f srcs/*.o

fclean: clean
	@echo Removing $(NAME)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
