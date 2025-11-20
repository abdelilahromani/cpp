NAME = Harl

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRCF = main.cpp Harl.cpp 

OBJF = ${SRCF:.cpp=.o}

HF = Harl.hpp

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