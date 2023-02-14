/*
** EPITECH PROJECT, 2022
** headers
** File description:
** arrakis
*/

#ifndef _ARRAKIS_H__
    #define _ARRAKIS_H__
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    int a_pow(int a, int b);
    void *a_memset(void *pointer, int value, size_t count);

    #define CHR(a) (a != ' ')
    #define SEP(a) (a == ' ')
    char **a_mkstw(char *str);
    void a_freestw(char **stw);

    int a_strlen(char *str);
    int a_putstr(int fd, char *str);
    char *a_strdup(char const *src);
    void a_concatstr(char *dest, char *str_1, char *str_2);
    int a_strncmp(char const *s1, char const *s2, int n);

#endif
