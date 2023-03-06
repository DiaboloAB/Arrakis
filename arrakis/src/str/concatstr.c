/*
** EPITECH PROJECT, 2023
** concatstr
** File description:
** concatenate 2 str
*/

#include "arrakis.h"

char *a_strcat(char *dest, char const *src)
{
    int size = 0;
    int j = 0;

    for (int i = 0; dest[i] != '\0'; i++)
        size++;
    for (j = 0; src[j] != '\0'; j++)
        dest[size + j] = src[j];
    dest[size + j] = '\0';
    return dest;
}
