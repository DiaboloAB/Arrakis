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
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

char *a_strdup(char const *src)
{
    int size = 0;

    for (int i = 0; src[i] != '\0'; i++)
        size++;
    char *duped = malloc(sizeof(char) * size);
    a_strcpy(duped, src);
    return duped;
}
