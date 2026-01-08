NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98 
 
SRCF = main.cpp Bureaucrat.cpp

HF = Bureaucrat.hpp

OBJF = ${SRCF:.cpp=.o}

$(NAME) : $(OBJF)
	c++ $(FLAGS) $(OBJF) -o $(NAME)

%.o : %.cpp $(HF)
	c++ $(FLAGS) -c $< -o $@
	
clean :
	rm -f $(OBJF)

fclean : clean 
	rm -f $(NAME)

re: fclean all