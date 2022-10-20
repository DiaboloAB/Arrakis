/*
** EPITECH PROJECT, 2022
** a_pow
** File description:
** It is those who can destroy a thing who truly control it
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
