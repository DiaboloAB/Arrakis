/*
** EPITECH PROJECT, 2023
** concatstr
** File description:
** concatenate 2 str
*/

#include "arrakis.h"

void a_concatstr(char *dest, char *str_1, char *str_2)
{
    int len = a_strlen(str_1) + a_strlen(str_2);
    int i = 0;

    dest = malloc(sizeof(char) * len + 1);
    a_memset(dest, 0, len);
    for (int j = 0; str_1[j]; j++)
        dest[i++] = str_1[j];
    for (int j = 0; str_2[j]; j++)
        dest[i++] = str_2[j];
}
