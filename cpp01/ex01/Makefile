NAME = Moar_brainz

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = main.cpp zombieHorde.cpp Zombie.cpp

OBJF = ${SRCF:.cpp=.o}

HF = Zombie.hpp

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