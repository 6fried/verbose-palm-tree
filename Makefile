##
## Makefile 
##


CPP =		g++

NAME =		Exec

CPPFLAGS =	-IDate -IFather -ISon

SRC = 		$(shell find Date -name 'date.cpp')\
			$(shell find Father -name 'father.cpp')\
			$(shell find Son -name 'son.cpp')\
			main.cpp

OBJ = 		$(SRC:.cpp=.o)

all:		clean $(NAME)

$(NAME): 	$(OBJ)
		rm -f $(NAME)
		$(CPP) -o $@ $^ $(CPPFLAGS)

clean:
		rm -f $(OBJ)

fclean: clean		
		rm -f Exec a.exe

re: fclean all

.PHONY: fclean clean re
