/*
** EPITECH PROJECT, 2023
** putstr
** File description:
** put str
*/

#include "arrakis.h"

int a_putstr(int fd, char *str)
{
    write(fd, str, a_strlen(str));
    return 0;
}
