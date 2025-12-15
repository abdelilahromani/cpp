NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRCF = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJF = ${SRCF:.cpp=.o}

HF = ClapTrap.hpp ScavTrap.hpp

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