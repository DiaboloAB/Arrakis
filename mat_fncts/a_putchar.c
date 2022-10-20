/*
** EPITECH PROJECT, 2022
** a_putchar
** File description:
** Who submits dominates
*/

#include <unistd.h>

void a_putchar(char c)
{
    write(1, &c, 1);
}
