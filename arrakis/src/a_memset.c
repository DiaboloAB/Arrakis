/*
** EPITECH PROJECT, 2023
** a_memset
** File description:
** a memset
*/

#include "include.h"

void *memset(void *pointer, int value, size_t count)
{
    for (int i = 0; i < count; pointer++) {
        pointer = value;
    }
}
