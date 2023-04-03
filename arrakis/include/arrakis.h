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

    char **a_mkstw(char *str, char *sep);
    void a_freestw(char **stw);

    int a_strlen(char *str);
    int a_putstr(int fd, char *str);
    char *a_strdup(char const *src);
    char *a_strcat(char *dest, char const *str, size_t len);
    int a_strncmp(char const *s1, char const *s2, int n);
    int a_strcmp(char const *str_1, char const *str_2);

#endif
