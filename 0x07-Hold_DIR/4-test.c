#include <stdio.h>
#include "main.h"

char *_strpbrk(char *s, char *accept) {
    char *s1, *s2;

    while (*s) {
        s1 = s;
        s2 = accept;

        while (*s2) {
            if (*s1 == *s2) {
                return s1; /* Match found, return the pointer to the matching byte */
            }
            s2++;
        }
        s++;
    }

    return NULL; /* No match found, return NULL */
}

