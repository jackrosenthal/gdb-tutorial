#include <stdio.h>
#include <stdlib.h>

/**
 * Allocate memory and read a string from standard input
 */
char *
read_str_buf (size_t buf_sz)
{
    char    *buf;
    buf = malloc(buf_sz);
    buf = fgets(buf, buf_sz - 1, stdin);
    return buf;
}

int
main (argc, argv)
    int     argc;
    char    **argv;
{
    char    *str;
    for (;;) {
        printf("What would you like me to print? ");
        str = read_str_buf(1<<31);
        printf("%s\n", str);
    }
    free(str);
    return 0;
}
