/*
** EPITECH PROJECT, 2023
** a_pow
** File description:
** a_pow
*/

int a_pow(int a, int b)
{
    int x = a;

    if (b == 0)
        return 1;
    for (int i = 0; i < b -1; i++)
        x *= a;
    return x;
}
