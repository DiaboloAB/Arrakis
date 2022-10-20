/*
** EPITECH PROJECT, 2022
** a_putint
** File description:
** Hope tarnishes observation
*/

#include "bsc_fncts.h"

static int min_nbr(int *nb)
{
    if (*nb == -2147483648) {
        *nb = 147483648;
        a_putchar('-');
        a_putchar('2');
    }
}

int a_putint(int nb)
{
    int a = 1;
    int digit_nbr = 1;
    min_nbr(&nb);
    if (nb < 0) {
        a_putchar('-');
        nb = -nb;
    }
    while (a <= nb / 10) {
        digit_nbr++;
        a *= 10;
    }
    while (digit_nbr > 0) {
        a_putchar(nb / a + 48);
        nb %= a;
        a /= 10;
        digit_nbr--;
    }
}
