##
## EPITECH PROJECT, 2022
## Arakis Makefile
## File description:
## Arrakis
##

SRC	=	src/str/a_strcmp.c \
	src/str/a_strlen.c \
	src/str/a_putstr.c \
	src/str/a_strdup.c \
	src/str/concatstr.c

SRC	+=	src/a_memset.c \
	src/a_pow.c \
	src/stw.c \

NAME	=	libarr.a

CFLAGS	=	-Iinclude/

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C arrakis_printf
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:
	make clean -C arrakis_printf
	find . -type f -name "*.o" -delete

fclean: clean
	make fclean -C arrakis_printf
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
