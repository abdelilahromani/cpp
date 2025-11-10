NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = PhoneBook.cpp  Contact.cpp main.cpp

HF = Contact.hpp PhoneBook.hpp

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