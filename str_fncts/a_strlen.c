/*
** EPITECH PROJECT, 2022
** a_strlen
** File description:
** Prophets are used to perishing by violence
*/

int a_strlen(char const *str)
{
    int i = 0;
    for (i = 0; str[i]; i++);
    return i;
}