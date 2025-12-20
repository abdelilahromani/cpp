NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRCF = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJF = ${SRCF:.cpp=.o}

HF = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all : $(NAME)

$(NAME) : $(OBJF)
	c++ $(FLAGS) $(OBJF) -o $(NAME)

%.o : %.cpp $(HF)
	c++ $(FLAGS) -c $< -o $@
	
clean :
	rm -f $(OBJF)

fclean : clean 
	rm -f $(NAME)

re: fclean all