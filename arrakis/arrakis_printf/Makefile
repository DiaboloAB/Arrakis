##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC	=	src/a_printf.c \
		src/get_params.c \
		src/get_length.c

SRC	+=	src/basics/my_getnbr.c \
		src/basics/my_strdup.c \
		src/basics/my_strlen.c \
		src/basics/flags_tools.c \
		src/basics/my_put_nbr.c

SRC	+=	src/flags/flag_bin.c \
		src/flags/flag_char.c \
		src/flags/flag_decimal.c \
		src/flags/flag_float.c \
		src/flags/flag_hexa.c \
		src/flags/flag_nbr.c \
		src/flags/flag_octal.c \
		src/flags/flag_pointer.c \
		src/flags/flag_scientific.c \
		src/flags/flag_str.c \
		src/flags/flag_magnitude.c

SRC	+=	src/puts/puts01.c \
		src/puts/puts02.c \
		src/puts/puts03.c \
		src/puts/puts04.c \
		src/puts/put_magnitude.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libap.a

CFLAGS	=	-Iinclude/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../

clean:
	find . -type f -name "*.o" -delete

fclean: clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re:	fclean all
