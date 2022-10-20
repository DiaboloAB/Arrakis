##
## EPITECH PROJECT, 2022
## Arakis Makefile
## File description:
## God created Arrakis to train the faithful. We cannot go against the word of God
##

NAME	=	libarakis.a

INCLU	=	../../include

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)


