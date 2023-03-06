/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
** compare str
*/

int a_strcmp(char const *str_1, char const *str_2)
{
    for (int i = 0; str_1[i] || str_2[i]; i++) {
        if (str_1[i] != str_2[i])
            return 0;
    }
    return 1;
}

int a_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}
