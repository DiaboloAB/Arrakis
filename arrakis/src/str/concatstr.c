/*
** EPITECH PROJECT, 2023
** concatstr
** File description:
** concatenate 2 str
*/

#include "arrakis.h"

char *a_strcat(char *dest, char const *str, size_t len)
{
    int index = 0;
    int len_dest = 0;
    char *buff = NULL;

    for (; dest[len_dest]; len_dest++);
    buff = malloc(sizeof(char) * (len_dest + len + 1));
    for (int i = 0; i < len_dest + len + 1; buff[i] = '\0', i++);
    for (int i = 0; i < len_dest; i++)
        buff[index++] = dest[i];
    for (int i = 0; i < len; i++)
        buff[index++] = str[i];
    free(dest);
    return buff;
}
