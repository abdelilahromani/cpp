NAME = Sed_is_for_losers

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRCF = main.cpp Line.cpp 

OBJF = ${SRCF:.cpp=.o}

HF = Line.hpp

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