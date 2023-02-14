##
## EPITECH PROJECT, 2022
## Arakis Makefile
## File description:
## Arrakis
##

NAME	=	libarr.a

INCLU	=	../../include

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C arrakis_printf
	ar rc $(NAME) $(OBJ) -L arrakis_printf -libap
	cp $(NAME) ../

clean:
	make clean -C arrakis_printf
	rm -f src/*.o

fclean: clean
	make fclean -C arrakis_printf
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
