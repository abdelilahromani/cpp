NAME = GlobalBanksters

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = Account.cpp tests.cpp

HF = Account.hpp

OBJF = ${SRCF:.cpp=.o}

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