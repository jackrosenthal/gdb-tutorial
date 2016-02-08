#include <stdio.h>
#include <stdlib.h>
extern char **environ;

/**
 * My own strlen implementation
 */
int my_strlen(const char *in) {
    const char *p = in;
    while (*p++);
    return p - in - 1;
}

/**
 * My own strdup implementation
 * I think there's some sort of bug in this... but I can't find it!
 */
char * my_strdup(const char *in) {
    char *new = malloc(my_strlen(in) + 1), *p = new;
    while (*in) {
        *p = *in;
        p++, in++;
    }
    return new;
}

int main(int argc, char **argv) {
    char **p = environ;
    while (*p) {
        char *str = my_strdup(*p);
        printf("%s\n", str);
        free(str);
        p++;
    }
    return 0;
}
