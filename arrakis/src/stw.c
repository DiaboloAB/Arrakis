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

static int count_word(char *str)
{
    int nb = 0;
    for (int i = 0; str[i] != 0; i++) {
        if (CHR(str[i]) && (SEP(str[i + 1]) || str[i + 1] == 0))
            nb++;
        if (!CHR(str[i]) && !SEP(str[i]))
            return -1;
    }
    return nb;
}

static int add_word(char *str, int i, char **stw, int word)
{
    int ltr = 0;
    int j = i;
    for (; CHR(str[j]); ltr++, j++);
    j = i;
    stw[word] = malloc(sizeof(char) * (ltr + 1));
    for (int k = 0; k < ltr + 1; k++)
        stw[word][k] = '\0';
    for (int k = 0; CHR(str[j]); j++, k++)
        stw[word][k] = str[j];
    for (;SEP(str[j]) && str[j] != '\0'; j++, ltr++);
    return ltr;
}

char **a_mkstw(char *str)
{
    int nb = count_word(str);
    int i = 0;
    char **stw = malloc(sizeof(char *) * (nb + 1));
    if (nb == -1)
        return NULL;
    while (SEP(str[i]))
        i++;
    for (int word = 0; word < nb; word++)
        i += add_word(str, i, stw, word);
    stw[nb] = NULL;
    return stw;
}
