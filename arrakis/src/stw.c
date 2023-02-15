/*
** EPITECH PROJECT, 2022
** str
** File description:
** str
*/

#include "arrakis.h"

void a_freestw(char **stw)
{
    for (int i = 0; stw[i] != NULL; i++)
        free(stw[i]);
    free(stw);
}

static int count_word(char *str, char a)
{
    int nb = 0;
    for (int i = 0; str[i] != 0; i++)
        if (str[i] != a && (str[i + 1] == a || str[i + 1] == 0))
            nb++;
    return nb;
}

static int add_word(char *str, char **stw, int word, char a)
{
    int ltr = 0;
    int j = 0;

    for (; str[j] != a; ltr++, j++);
    j = 0;
    stw[word] = malloc(sizeof(char) * (ltr + 1));
    for (int k = 0; k < ltr + 1; k++)
        stw[word][k] = '\0';
    for (int k = 0; str[j] != a; j++, k++)
        stw[word][k] = str[j];
    for (;str[j] == a && str[j] != '\0'; j++, ltr++);
    return ltr;
}

char **a_mkstw(char *str, char a)
{
    int nb = count_word(str, a);
    int i = 0;
    char **stw = malloc(sizeof(char *) * (nb + 1));
    if (nb == -1)
        return NULL;
    while (str[i] == a)
        i++;
    for (int word = 0; word < nb; word++)
        i += add_word(str + i, stw, word, a);
    stw[nb] = NULL;
    return stw;
}
