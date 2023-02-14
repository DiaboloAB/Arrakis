/*
** EPITECH PROJECT, 2023
** get_len.
** File description:
** get_len
*/

int a_strlen(char *str)
{
    int len = 0;

    for (; str[len]; len++);
    return len;
}
