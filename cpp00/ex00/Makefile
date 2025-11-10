NAME = Megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = megaphone.cpp

OBJF = ${SRCF:.cpp=.o}

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