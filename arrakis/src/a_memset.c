/*
** EPITECH PROJECT, 2023
** a_memset
** File description:
** a memset
*/

#include "arrakis.h"

void *a_memset(void *pointer, int value, size_t count)
{
    int *my_pointer = (int *)pointer;

    for (int i = 0; i < count; pointer++, i++)
        *my_pointer = value;
}
