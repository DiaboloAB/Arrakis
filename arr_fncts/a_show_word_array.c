/*
** EPITECH PROJECT, 2022
** a_show_word_array
** File description:
** a
*/

#include "bsc_fncts"

int a_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
