/*
** EPITECH PROJECT, 2023
** strdup and strcpy
** File description:
** dup and copy
*/

#include "arrakis.h"

static char *a_strcpy(char *dest, char const *src)
{
    int i;
    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

char *a_strdup(char const *src)
{
    int len = 0;

    for (; src[len]; len++);
    char *duped = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len + 1; i++)
        duped[i] = '\0';
    a_strcpy(duped, src);
    return duped;
}
