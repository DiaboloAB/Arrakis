##
## EPITECH PROJECT, 2022
## Arakis Makefile
## File description:
## Arrakis
##

NAME	=	libar.a

INCLU	=	../../include

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
