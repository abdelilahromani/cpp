NAME = Unnecessary_violence

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJF = ${SRCF:.cpp=.o}

HF = Weapon.hpp  HumanA.hpp  HumanB.hpp

all : $(NAME)

$(NAME) : $(OBJF)
	c++ $(FLAGS) $(OBJF) -o $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@
	
clean :
	rm -f $(OBJF)

fclean : clean 
	rm -f $(NAME)

re: fclean all