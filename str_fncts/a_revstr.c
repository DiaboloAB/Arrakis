/*
** EPITECH PROJECT, 2022
** a_revstr
** File description:
** The mystery of life is not a question to be solved but a reality to be lived
*/

char *a_revstr(char *str)
{
    int length = 0;
    char ch;

    for (int i = 0; str[i] != '\0'; i++)
        length ++;

    for (int j = 0; j < length / 2; j++) {
        ch = str[j];
        str[j] = str[length - j - 1];
        str[length - j - 1] = ch;
    }
    return str;
}
