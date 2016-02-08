#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char *str = strdup("Hello, World!\n");
    int x = 42;
    int *y = &x;
    double pi = 3.1415926535897932384;
    double *pi_ptr = &pi;
    if (*str && x && *y && *(int *)pi_ptr)
        printf("Goodbye, world!\n");
    return 0;
}
